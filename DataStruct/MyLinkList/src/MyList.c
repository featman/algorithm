/*
 * List.c
 *
 *  Created on: 2015年3月17日
 *      Author: lorne
 */


#include "MyList.h"

int ListInit(HeadList *p){
	*p = (HeadList)malloc(sizeof(struct LNode));
	if( *p == NULL)	{
		printf("Init Error\n");
		return 0;
	}
	(*p)->next = NULL;

	return 1;
}

int CreateList(HeadList *p,int n){
	if(*p == NULL) return 0;
	int i;
	RadomNode *R = NULL;
	RadomNode *tmp = *p;//注意！！在操作链表头指针的时候一定要赋一个临时的变量。不然会把链表头指跑。
	printf("Please Input some word\n");
	for(i=0; i<n; i++){
		R = (RadomNode*)malloc(sizeof(RadomNode));
		if(R == NULL) return 0;
		scanf("%d",&(R->data));
		R->next = NULL;
		tmp->next = R;
		tmp = R;//注意
	}
	return 1;

}

int Find_iList(HeadList p, int i, Item *item){
	RadomNode *tmp = p;
	int count = 0;
	tmp = tmp->next;
	i = i-1;
	while(count!=i){
		count++;
		tmp = tmp->next;
	}
	*item = tmp ->data;
	return 1;

}

int Find_vList(HeadList p, Item *item){
	RadomNode *tmp = p;
	int count = 1;
	tmp = tmp->next;
	while(tmp != NULL && *item != tmp->data){
		count++;
		tmp = tmp->next;
	}
	if(count>SizeOfList(p)-1) return -1;
	return count;
}

int InsertList(HeadList *p,int i, Item item){

	RadomNode *R = (RadomNode*)malloc(sizeof(RadomNode));
	RadomNode *tmp = *p;
	int count;
	for(count=0; count < SizeOfList(tmp); count ++){
		tmp = tmp->next;
		if(count == i-1){
			R->next = tmp->next;
			tmp->next = R;
			R->data = item;
		}
	}
	return 1;

}


int DelList(HeadList *p, int i, Item *item){
	RadomNode *tmp = *p;
	int count = 0;
	while(tmp->next && count++!=i-1){
		tmp = tmp->next;
	}
	RadomNode *del = tmp->next;//删除节点需要一个临时的指针，不然无法去释放内存。
	tmp->next = del->next;
	*item = del->data;
	free(del);
	del = NULL;

	return 1;
}

int DropList(HeadList *p){
	RadomNode *drop;
	RadomNode *head = *p;
	while(head->next){
		drop = head->next;
		head->next = drop->next;
		free(drop);
		drop = NULL;

	}
	free(head);
	head = NULL;
	printf("Free the LinkList Finished\n");

	return 1;

}

int SizeOfList(HeadList p){
	int i = 0;
//	RadomNode *r = p;//关键！！不要把p指跑了。。。。这里无所谓。因为形参并不能改变链表的指针。
	while(p!=NULL){
		p = p->next;
		i++;
	}

	return i;

}

int PrintList(HeadList p){

	int i;
	RadomNode *r = p;
	int value = SizeOfList(p);
//	printf("value = %d\n",value);
	r = r->next;//不打印第一个头结点。
	for(i=1; i<value; i++){//这里的i=1注意下，因为链表头结点的值为一个任意值，所以在计算链表大小的时候也把头结点算上了
		printf("%d  ",r->data);
		r = r->next;
	}
	printf("\n");

	return 1;
}

