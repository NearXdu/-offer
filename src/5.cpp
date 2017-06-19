#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
	val(x), next(NULL) {
	}
};

class Solution {
    private:
	void help(vector<int>&vec,ListNode*head)
	{
	    if(head!=NULL)
	    {
		if(NULL!=head->next)
		{
		    help(vec,head->next);
		}
		vec.push_back(head->val);
	    }

	}

    public:
	vector<int> printListFromTailToHead(ListNode* head) 
	{
	    vector<int>vec;
	    vec.reserve(1024);
	    help(vec,head);
	    vector<int>(vec).swap(vec);
	    return vec;

	}
};
int main(int argc,char**argv)
{
    ListNode * head = new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=NULL;

    Solution test;
    vector<int>result=test.printListFromTailToHead(head);

    copy(result.begin(),result.end(),ostream_iterator<int>(cout," "));
    cout<<endl<<endl;
    return 0;
}
