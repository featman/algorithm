/*
 * MyString.h
 *
 *  Created on: 2015��4��5��
 *      Author: lorne
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_

#include <iostream>
using namespace std;
#include <string.h>

class MyString {

private:
	char *string;
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString &ms);
	~MyString();
	MyString& operator=(const char* str);
	MyString operator+(const MyString &ms);
	char operator[](unsigned int index);
	bool operator==(const MyString &ms);
	friend ostream& operator<<(ostream& out, const MyString& ms);
};

#endif /* MYSTRING_H_ */
