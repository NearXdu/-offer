#include <vector>
#include <iostream>
using namespace std;
class Solution {
    private:
	bool judge(vector<int>&a, int l, int r)
	{
	    if (l >= r)
		return true;
	    int j = r;//1.先找到根
	    int i,k;
	    for (i = r - 1; i >= l; --i)//把右子树找出来
	    {
		if (a[i] < a[r])
		    break;
	    }
	    for (k = i; k >= l; --k)//把左子树找出来
	    {
		if (a[k] > a[r])//只要有左子树序列大于根，立即返回false
		    return false;
	    }
	    //如果都满足，则需要递归找左右子树
	    return judge(a,l,i) && judge(a,i+1,r-1);

	}
    public:
	bool VerifySquenceOfBST(vector<int> sequence) {
	    if (sequence.size() == 0)
		return false;
	    return judge(sequence, 0, sequence.size() - 1);
	}
};
