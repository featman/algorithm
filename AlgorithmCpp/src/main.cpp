//============================================================================
// Name        : myAlgorithm.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================



#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<string> s(3, "shao"); // 3 objects of string type, init value: shao
    s.push_back("alben");   // push_back() for dynamically increasing
    s.push_back("xinyan");
    cout << "size of s is(using iterator): " << s.size() << endl ;
    for(vector<string>::iterator myiter=s.begin(); myiter!=s.end(); ++myiter)
   {
        cout << *myiter << endl; //iterator����
        *myiter = "hi";
   }

    cout << endl << "use index visit:" << endl;
    for(i = 0; i < s.size(); i++)cout << s[i] << endl; //�±����
    return 0;
}

