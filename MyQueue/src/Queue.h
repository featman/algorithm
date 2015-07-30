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

typedef struct node{
	int data;
	struct node *next;
}radomnode,*Queue;

typedef struct{
	Queue front;
	Queue rear;
}LinkQueue;

int size;

LinkQueue* init_queue();

int is_empty(LinkQueue *lq);

int push_queue(LinkQueue *lq,int item);

int pop_queue(LinkQueue *lq,int *item);

int size_queue();

int destroy_queue(LinkQueue *lq);
#endif /* STACK_H_ */
