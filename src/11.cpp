#include <iostream>
using namespace std;

class Solution 
{
    private:
	double helper(double base,int exponent)
	{
	    if(0==exponent)
		return 1;
	    if(1==exponent)
		return base;
	    double tmp=helper(base,exponent>>1);
	    tmp*=tmp;
	    if(exponent&1==1)//奇数
		tmp*=base;
	    return tmp;
	}
    public:
	double Power(double base, int exponent) 
	{
	    bool flag = exponent<0?true:false;
	    if(flag)//负数
		exponent=-exponent;
	    double result = helper(base,exponent);
	    if(flag)
		return 1.0/result;
	    else
		return result;

	}
};
int main(int argc, char **argv)
{
    Solution test;
    cout<<test.Power(2,-3)<<endl;
    return 0;
}
