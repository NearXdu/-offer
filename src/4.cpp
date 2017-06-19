#include <iostream>
#include <cstring>
using namespace std;
class Solution {
public:
	void replaceSpace(char *&str,int length) {
	    if(NULL==str)
		return;
	    char *p=str;
	    int space=0;
	    while(*p!='\0')
	    {
		if(*p==' ')
		    ++space;
		++p;
	    }
	    char *copy= (char *)malloc((2*space+length+1)*sizeof(char));
	    *(copy+2*space+length)='\0';
	    int j=2*space+length-1;
	    int i=length-1;
	    while(i>=0)
	    {
		if(*(str+i)==' ')
		{
		    *(copy+j)='0';
		    *(copy+j-1)='2';
		    *(copy+j-2)='%';
		    j-=3;
		    --i;
		}
		else
		{
		    *(copy+j)=*(str+i);
		    --j;
		    --i;
		}
	    }
	    char *tmp=copy;
	    copy=str;
	    str=tmp;
//	    free(copy);
	}
};
int main()
{
    char hello[]="We are happy.";
    char *p=hello;
    Solution test;
    test.replaceSpace(p,strlen(hello));
    cout<<p<<endl;
    free (p);
    return 0;
}
