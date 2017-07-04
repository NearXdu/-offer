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
	ListNode* ReverseList(ListNode* pHead)
       	{
	    print(pHead);
	    cout<<endl;
	    //创建头结点
	    ListNode *newHead=new ListNode(0);
	    newHead->next=pHead;
	    /*
	     * p->next=head->next;
	     * head->next=p;
	     *
	     * */
	    ListNode *pre=newHead->next;
	    ListNode *cur=pre->next;;
	    ListNode *next;
	    while(NULL!=cur)
	    {
		//遍历下个节点
		next=cur->next;
		//头插
		cur->next=newHead->next;
		newHead->next=cur;
		//保持连接
		pre->next=next;
		//下个节点
		cur=next;
	    }
	    print(newHead->next);
	    cout<<endl;
	    return NULL;
	}
};
int main()
{
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    Solution test;
    test.ReverseList(head);
    return 0;
}
