class Solution {
    public:
	void reOrderArray(vector<int> &array) {
	    int odd = 0;
	    int even = array.size() - 1;
	    while (odd < even)
	    {
		while (odd < even && (array[odd] & 1) == 1)
		    ++odd;
		while (odd < even && (array[even] & 1) == 0)
		    --even;
		if (odd < even)
		{
		    swap(array[odd], array[even]);
		}
	    }
	}
};
////////////////////////////////////
//


class Solution {
    public:
	void reOrderArray(vector<int> &array) {
	    vector<int>tmp;
	    tmp.reserve(array.size());
	    for(int i=0;i<array.size();++i){
		if((array[i]&0x1)==1)
		    tmp.push_back(array[i]);
	    }
	    for(int i=0;i<array.size();++i){
		if((array[i]&0x1)==0)
		    tmp.push_back(array[i]);
	    }
	    array.swap(tmp);
	}
};
