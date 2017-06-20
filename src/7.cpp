#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Solution
{
    public:
	void push(int node)
	{
	    stack1.push(node);
	}
	int pop() 
	{
	    if(!stack1.empty()||!stack2.empty())
	    {
		if(stack2.empty())
		{
		    while(!stack1.empty())
		    {
			stack2.push(stack1.top());
			stack1.pop();
		    }
		}
		int t=stack2.top();
		stack2.pop();
		return t;
	    }
	    return -1;
	}
    private:
	stack<int> stack1;
	stack<int> stack2;
};
int main(int argc,char **argv)
{
    Solution q;
    q.push(1);
    q.push(2);
    q.push(3);

    for(int i=0;i<3;++i)
    {
	cout<<q.pop()<<endl;
    }
    return 0;

}
