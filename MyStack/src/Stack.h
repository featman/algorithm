/*
 * Stack.h
 *
 *  Created on: 2015Äê3ÔÂ29ÈÕ
 *      Author: lorne
 */


#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#ifndef STACK_H_
#define STACK_H_

typedef struct stack_list{
	int data;
	struct stack_list *next;
}radomnode,*stacklist;



void init_stack(stacklist *s);

int push_stack(stacklist *s,int item);

int pop_stack(stacklist *s,int *item);

int size_stack();

int get_top_stack(stacklist s,int *item);

int is_empty(stacklist s);

#endif /* STACK_H_ */
