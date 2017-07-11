#include <iostream>
#include <stack>
using namespace std;
class Solution {
    public:
	void push(int value) {
	    s1.push(value);
	    if (s2.empty()||value < s2.top())
	    {
		s2.push(value);
	    }
	    else
	    {
		s2.push(s2.top());
	    }
	}
	void pop() {
	    s1.pop();
	    s2.pop();
	}
	int top() {
	    return s1.top();
	}
	int min() {
	    return s2.top();
	}
    private:
	stack<int>s1;//正常的栈
	stack<int>s2;//最小栈
};
