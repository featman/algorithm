//============================================================================
// Name        : MyString.cpp
// Author      : lorne
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "MyString.h"

MyString::MyString() {
	string = new char[1];
	*string = '\0';
}

MyString::MyString(const char* str) {
	if (str == NULL) {
		string = new char[1];
		*string = '\0';
	} else {
		int len = strlen(str);
		string = new char[len + 1];
		strcpy(string, str);
	}
}

MyString::MyString(const MyString& ms) {
	int len = strlen(ms.string);
	this->string = new char[len + 1];
	strcpy(this->string, ms.string);
}

MyString::~MyString() {
	delete[] this->string;
}

MyString& MyString::operator=(const char* str) {
	int len = strlen(str);
	this->string = new char[len + 1];
	strcpy(this->string, str);
	return *this;
}

MyString MyString::operator+(const MyString& ms) {
	int len = strlen(ms.string);
	MyString str;
	str.string = new char[len + strlen(this->string) + 1];
	strcpy(str.string, this->string);
	strcat(str.string, ms.string);
	return str;
}

char MyString::operator[](unsigned int index) {
	char chr;
	chr = this->string[index];
	return chr;
}

bool MyString::operator==(const MyString &ms) {
	int res = strcmp(ms.string, this->string);
	if (!res) {
		return true;
	} else {
		return false;
	}
}

ostream& operator<<(ostream& out, const MyString& ms) {
	out << ms.string;
	return out;
}

