#include <iostream>
using namespace std;
class Solution {
    public:
	int Fibonacci(int n) 
	{
	    if(0==n)
		return 0;
	    if(1==n)
		return 1;

	    int a1=1;
	    int a0=0;
	    int res;
	    for(int i=2;i<=n;++i)
	    {
		res=a0+a1;
		a0=a1;
		a1=res;
	    }
	    return res;

	}
};
int main(int argc,char *argv[])
{
    Solution test;
    cout<< test.Fibonacci(std::atoi(argv[1]))<<endl;
    return 0;
}
