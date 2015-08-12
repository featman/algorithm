//============================================================================
// Name        : myAlgorithm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include "withString.h"
int main()
{

	int i = 23;
	    int& r = i;
	    printf("%x,%x",&i,&r);



	cout<<"helfffffl"<<endl;
	Solution s;
	vector<string> val = s.generateParenthesis(3);
	for(vector<string>::iterator it=val.begin();it!=val.end();it++)
		cout<<*it<<" ";
	cout<<endl;
    return 0;
}

