/*
 * main.cpp
 *
 *  Created on: 2015��4��5��
 *      Author: lorne
 */

//
//#include "MyString.h"
#include "Template.h"
#include "string"

int main() {
	MyString str = "hello~!";
//	cout<<str<<endl;
//	cout<<"index: "<<str[1]<<endl;
//	MyString str1("fdfdsfs");
//	cout<<str1<<endl;
//	MyString str2(str1);
//	cout<<str2<<endl;
//	MyString str3 = str+str2;
//	cout<<str3<<endl;
//	if(str1 == str2){
//		cout<<"yes"<<endl;
//	}else{
//		cout<<"no"<<endl;
//	}

	test<string> s("stringdddd");
	s.show();

	return 0;
}
