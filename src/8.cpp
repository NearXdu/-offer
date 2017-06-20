#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
	int minNumberInRotateArray(vector<int> rotateArray) 
	{
	    int l=0;
	    int r=rotateArray.size()-1;
	    int m;
	    while(l<r)
	    {
		m=l+(r-l)/2;
		if(rotateArray[m]>rotateArray[r])
		{
		    l=m+1;
		}
		else if(rotateArray[m]<rotateArray[r])
		{
		    r=m;
		}
		else
		{
		    --r;
		}
		
	    }
	    return rotateArray[l];

	}
};

int main(int argc,char **argv)
{
    vector<int>ivec={3,4,4,4,5,1,1,1,2};
    Solution test;
    cout<<test.minNumberInRotateArray(ivec)<<endl;
    return 0;
}
