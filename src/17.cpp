#include <iostream>

using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
	val(x), next(NULL) {
	}
};
class Solution {
    public:
	void print(ListNode *pHead)//打印链表
	{
	    if(pHead!=NULL)
	    {
		cout<<pHead->val<<" ";
		if(pHead->next!=NULL)
		    print(pHead->next);
	    }
	}
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
	    if(pHead1==NULL)
		return pHead2;
	    if(pHead2==NULL)
		return pHead1;
	    ListNode * newHead=NULL;
	    if(pHead1->val<pHead2->val)
	    {
		newHead=pHead1;
		newHead->next=Merge(pHead1->next,pHead2);
	    }
	    else
	    {
		newHead=pHead2;
		newHead->next=Merge(pHead1,pHead2->next);
	    }
	    return newHead;

	}

};
int main()
{
    ListNode *l1=new ListNode(1);
    l1->next=new ListNode(3);
    l1->next->next=new ListNode(5);
    ListNode *l2=new ListNode(2);
    l2->next=new ListNode(4);
    l2->next->next=new ListNode(6);

    Solution test;
    ListNode *l = test.Merge(l1,l2);
    test.print(l);
    cout<<endl;
    return 0;
}
