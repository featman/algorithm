/*
 * Stack.c
 *
 *  Created on: 2015Äê3ÔÂ29ÈÕ
 *      Author: lorne
 *
 */

#include "Stack.h"
int len = 0;

void init_stack(stacklist *s){
	*s = NULL;

}


int push_stack(stacklist *s,int item){
	radomnode *node = (radomnode*)malloc(sizeof(radomnode));
	node->data = item;
	node->next = *s;
	*s = node;
	len++;
	return 1;
}


int is_empty(stacklist s){
	radomnode *node;
	node = s;
	if(!node->next) return 1;
	else return 0;
}



int pop_stack(stacklist *s,int *item){

	radomnode *node;
	node = *s;
	if(node == NULL) printf("pop err,this is a null stack\n");
	*s = (*s)->next;
	free(node);
	node = NULL;
	len--;
	return 1;
}

int size_stack(){
	return len;
}

int get_top_stack(stacklist s,int *item){
	if(is_empty(s)) printf("this is a null stack\n");
	radomnode *node;
	node = s;
	*item = node->data;

	return 1;
}



