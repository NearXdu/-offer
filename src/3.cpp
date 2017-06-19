#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
	bool Find(int target, vector<vector<int> > array) 
	{
	    int row = array.size();
	    int col = array[0].size();
	    if(row==0||col==0)
		return false;
	    int i=0;
	    int j=col-1;
	    while(i<row && j>=0)
	    {
		if(array[i][j]<target)
		{
		    ++i;
		}
		else if (array[i][j]>target)
		{
		    --j;
		}
		else
		{
		    return true;
		}

	    }
	    return false;
	}
};

int main(int argc,char **argv)
{
    Solution test;
    vector <vector <int> > array;
    vector<int>a1={1,2,8,9};
    vector<int>a2={2,4,9,12};
    vector<int>a3={4,7,10,13};
    vector<int>a4={6,8,11,15};
    array.push_back(a1);
    array.push_back(a2);
    array.push_back(a3);
    array.push_back(a4);
    cout<< test.Find(4,array)<<endl;;
    return 0;

}
