/*
 * List.h
 *
 *  Created on: 2015年3月17日
 *      Author: lorne
 */

#ifndef MYLIST_H_
#define MYLIST_H_
#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>


typedef int Item;
typedef struct LNode{
	Item data;
	struct LNode *next;
}RadomNode,*HeadList;
//一般来说，链表的结构体这里都需要定义两个变量，RamdomNode代表任意一个节点，而HeadList代表整个链表的头指针


//链表的初始化
int ListInit(HeadList *p);

//链表的创建(这个其实就是插入)，初始化只是把链表的头节点的指针域置为空，而其他一些函数，他们做的工作是假想已经有了一个链表了，
//去操作那个已经存在的链表。而创建链表，实际上就是你给我输入一批值，我用指针给他串起来。
int CreateList(HeadList *p,int n);

//按序号查找
int Find_iList(HeadList p, int i, Item *item);

//按值查找
int Find_vList(HeadList p, Item *item);

//在链表中的俩个节点之间插入一个数据,i位实际的第i个，从1开始的，所以要考虑下。又由于链表中还有一个头结点，故相互抵消了。不用考虑i=0。
int InsertList(HeadList *p,int i, Item item);

//删除一个指定位置的元素
int DelList(HeadList *p, int i, Item *item);

//返回单链表的大小,算头结点
int SizeOfList( HeadList p);

//删除整个单链表
int DropList(HeadList *p);

//打印链表
int PrintList(HeadList p);

#endif /* MYLIST_H_ */
