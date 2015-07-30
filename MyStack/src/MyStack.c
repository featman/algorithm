/*
 ============================================================================
 Name        : MyStack.c
 Author      : lorne
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "Stack.h"

int main(void) {
	stacklist sl;
	init_stack(&sl);
	push_stack(&sl,1);
	push_stack(&sl,22);
	push_stack(&sl,1222);
	push_stack(&sl,11111);
	push_stack(&sl,144);
	printf("%d\n",size_stack());
	int item;
	get_top_stack(sl,&item);
	printf("%d\n",item);
	printf("is empty:%d\n",is_empty(sl));
	pop_stack(&sl,&item);
	pop_stack(&sl,&item);
	pop_stack(&sl,&item);
	pop_stack(&sl,&item);
	pop_stack(&sl,&item);
	printf("%d\n",size_stack());

	return 0;

}
