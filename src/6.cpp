#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};//data structure

class Solution {
    private:
	TreeNode * help(vector<int>&pre,//pre seq
			vector<int>&vin,//in seq
			int preStart,	//pre start idx
			int preEnd,     //pre end idx
			int inStart,    //in start idx
			int inEnd,    //in end idx
			unordered_map<int,int>&index)// map find idx in vin
	{
	    if(inStart>inEnd)//
	    {
		return NULL;
	    }
	    int rootval=pre[preStart];//root val
	    TreeNode * root=new TreeNode(rootval); //root node
	    int idx=index[rootval];//root index in vin
	    //split vin with idx
	    root->left=help(pre,vin,preStart+1,preStart+idx-inStart,inStart,idx-1,index);
	    root->right=help(pre,vin,preStart+idx-inStart+1,preEnd,idx+1,inEnd,index);
	    return root;
	}
    public:
	TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) 
	{
	    unordered_map<int,int>index;
	    for(int i=0;i<vin.size();++i)
	    {
		index[vin[i]]=i;
	    }
	    return help(pre,vin,0,pre.size()-1,0,vin.size()-1,index);

	}
};
int main()
{
    TreeNode* root= new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    Solution test;
    vector<int>pre={1,2,3};
    vector<int>vin={2,1,3};
    TreeNode * root_ = test.reConstructBinaryTree(pre,vin);
    cout<<root_->val<<endl;
    cout<<root_->left->val<<endl;
    cout<<root_->right->val<<endl;
    return 0;
}
