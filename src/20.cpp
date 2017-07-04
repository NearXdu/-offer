#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
	int row= matrix.size();
	int col=matrix[0].size();
	if(row==0||col==0)
	    return vector<int();
	int minVal=min(row,col);
	int count=minVal/2;
	bool flag=((minVal&1)==1 )? true:false;

	vector<int>res;
	res.reserve(row*col);
	for(int i=0;i<count;++i)
	{
	    for(int j=i;j<col-i-1;++j)//从左往右
	    {
		res.push_back(matrix[i][j]);
	    }
	    for(int j=i;j<row-i-1;++j)//从上往下
	    {
		res.push_back(matrix[j][col-i-1]);
	    }
	    for(int j=col-i-1;j>i;--j)//从右往左
	    {
		res.push_back(matrix[row-i-1][j]);
	    }
	    for(int j=row-i-1;j>i;--j)//从下往上
	    {
		res.push_back(matrix[j][i]);
	    }
	}
	if(flag)
	{
	    if(row==col)
		res.push_back(matrix[row/2][col/2]);
	    else if(row>col)
	    {
		for(int i=count;i<row-count;++i)
		{
		    res.push_back(matrix[i][count]);
		}
	    }
	    else//row < col
	    {
		for(int i=count;i<col-count;++i)
		{
		    res.push_bakc(matrix[count][i]);
		}
	    }
	}
	return  res;
    }
};

