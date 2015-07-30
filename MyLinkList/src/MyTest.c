/*
 ============================================================================
 Name        : MyTest.c
 Author      : lorne
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MyList.h"
#include <string.h>



int main(void) {



	Item val;
	HeadList h;
	ListInit(&h);
	CreateList(&h,5);
	PrintList(h);
	Find_iList(h,5,&val);
//	printf("%d\n",val);

	int tmp1 = 10000;
	InsertList(&h,2,tmp1);

	PrintList(h);
	printf("%d\n",SizeOfList(h));


	Item a;
	printf("del list\n");
	DelList(&h,3,&a);
	printf("del_value = %d\n",a);
	PrintList(h);

	DropList(&h);
	return 1;

}
