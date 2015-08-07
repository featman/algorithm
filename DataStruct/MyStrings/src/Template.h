/*
 * Template.h
 *
 *  Created on: 2015��4��6��
 *      Author: lorne
 */

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include "MyString.h"

template<class T>

class test {
private:
	T value;
public:
	test(T val);

	void show();
};

template<class T>
test<T>::test(T val) {
	this->value = val;
	cout << "fffffff" << this->value << endl;
}

template<class T>
void test<T>::show() {
	cout << value << endl;
}

#endif /* TEMPLATE_H_ */
