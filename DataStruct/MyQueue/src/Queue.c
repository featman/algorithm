/*
 * Stack.c
 *
 *  Created on: 2015��3��29��
 *      Author: lorne
 *
 */

#include "Queue.h"

 int size = 0;

LinkQueue* init_queue(){
	LinkQueue* lq = (LinkQueue*)malloc(sizeof(LinkQueue));
	if(lq){
		lq->front = NULL;
		lq->rear = NULL;
	}
	return lq;
}

int is_empty(LinkQueue *lq){
	if(lq->front == lq->rear && lq->front == NULL){
		return 1;
	}
	return 0;
}

int push_queue(LinkQueue *lq,int item){
	radomnode *node = (radomnode*)malloc(sizeof(struct node));
	node->data = item;
	node->next = NULL;
	if(is_empty(lq)){
		lq->front = node;
	}else{
		lq->rear->next = node;
	}
	lq->rear = node;
	size++;
	return 1;


}

int pop_queue(LinkQueue *lq,int *item){
	radomnode *node;
	if(is_empty(lq)) return 0;

	node = lq->front;
	*item = node->data;
	lq->front = node->next;
	free(node);
	node = NULL;
	size--;
	return 1;

}

int size_queue(){
	return size;
}

int destroy_queue(LinkQueue *lq){
	while(is_empty(lq)){
		pop_queue(lq,NULL);
	}
	return 1;
}

