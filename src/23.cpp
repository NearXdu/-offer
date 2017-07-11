/*
   struct TreeNode {
   int val;
   struct TreeNode *left;
   struct TreeNode *right;
   TreeNode(int x) :
   val(x), left(NULL), right(NULL) {
   }
   };*/

class Solution {
    public:
	vector<int> PrintFromTopToBottom(TreeNode* root) {
	    if (nullptr == root)
		return vector<int>();
	    queue<TreeNode*>q;
	    q.push(root);
	    vector<int>result;
	    while (!q.empty())
	    {
		TreeNode* r = q.front();
		q.pop();
		result.push_back(r->val);
		if (r->left != nullptr)
		    q.push(r->left);
		if (r->right != nullptr)
		    q.push(r->right);
	    }
	    return result;
	}
};
