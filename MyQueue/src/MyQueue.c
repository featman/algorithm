/*
 ============================================================================
 Name        : MyQueue.c
 Author      : lorne
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Queue.h"

int main(void) {
	LinkQueue *lq = init_queue();
	push_queue(lq,12);
	printf("size:%d,is_empty:%d\n",size_queue(),is_empty(lq));
	push_queue(lq,11112);
	printf("size:%d,is_empty:%d\n",size_queue(),is_empty(lq));
	push_queue(lq,33312);
	printf("size:%d,is_empty:%d\n",size_queue(),is_empty(lq));
	push_queue(lq,124444);
	printf("size:%d,is_empty:%d\n",size_queue(),is_empty(lq));
	int data;
	pop_queue(lq,&data);
	printf("size:%d,is_empty:%d,data:%d\n",size_queue(),is_empty(lq),data);
	pop_queue(lq,&data);
	pop_queue(lq,&data);
	printf("size:%d,is_empty:%d,data:%d\n",size_queue(),is_empty(lq),data);

	return 0;
}
