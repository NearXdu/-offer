class Solution {
    private:
	stack<int>s;
    public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV)
	{
	    int j = 0;
	    for (int i = 0; i < pushV.size(); ++i)
	    {
		s.push(pushV[i]);
		while (!s.empty() && s.top() == popV[j])
		{
		    s.pop();
		    ++j;
		}
	    }
	    if (s.empty())
		return true;
	    else
		return false;
	}
};
