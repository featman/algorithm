/*
 * leetcode string test
 */


#ifndef WITHSTRING_H_
#define WITHSTRING_H_

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;


class Solution {
public:

//	Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
//
//	For example, given n = 3, a solution set is:
//
//	"((()))", "(()())", "(())()", "()(())", "()()()"
	vector<string> generateParenthesis(int n) {
		vector<string> res;
		addingpar(res, "", n, 0);
		return res;
	}
	void addingpar(vector<string> &v, string str, int n, int m){
		if(n==0 && m==0) {
			v.push_back(str);
			return;
		}
		if(m > 0){ addingpar(v, str+")", n, m-1); }
		if(n > 0){ addingpar(v, str+"(", n-1, m+1); }
	}


};


#endif /* WITHSTRING_H_ */
