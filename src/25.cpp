class Solution {
    private:
	void dfs(vector<vector<int>>&r, vector<int>path, TreeNode * root, int sum,int target)
	{
	    if (root == nullptr)
		return;
	    path.push_back(root->val);
	    sum += root->val;
	    if ((root->left == nullptr&&root->right == nullptr) && (sum == target))
		r.push_back(path);
	    dfs(r, path, root->left, sum, target);
	    dfs(r, path, root->right, sum, target);
	}
    public:
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
	    if (nullptr == root)
		return vector<vector<int>>();
	    vector<vector<int>>res;
	    vector<int>tmp;
	    dfs(res, tmp, root, 0,expectNumber);
	    return res;
	}
};
