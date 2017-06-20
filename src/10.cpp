#include <iostream>
using namespace std;
class Solution 
{
    public:
	//4字节int型1的个数
	int  NumberOf1(int n)
       	{
	    int count = 0;
	    while(n)
	    {
		++count;
		n=(n-1)&n;
	    }
	    return count;
	}
	//4字节int型0的个数
	int NumberOf0(int n)
	{
	    int count = 0;
	    while(n+1)
	    {
		++count;
		n=(n+1)|n;
	    }
	    return count;

	}

	//4字节int型0的个数，不包括补位的0
	int NumberOf0_1(int n)
	{
	    int count = 0;
	    while(n)
	    {
		if((n&1)==0)
		{
		    ++count;
		}
		n>>=1;
	    }
	    return count;
	 
	}

};

int main(int argc, char *argv[])
{
    Solution test;
    cout<<test.NumberOf1(std::atoi(argv[1]))<<endl;
    cout<<test.NumberOf0(std::atoi(argv[1]))<<endl;
    cout<<test.NumberOf0_1(std::atoi(argv[1]))<<endl;
    return 0;
}

