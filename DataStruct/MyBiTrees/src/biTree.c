/*
 * Stack.c
 *
 *  Created on: 2015Äê3ÔÂ29ÈÕ
 *      Author: lorne
 *
 */

#include "bitree.h"


Node *create_node(int data,Node *lchild,Node *rchild){
	Node *node = (Node*)malloc(sizeof(struct Bitree));
	if(node){
		node->lchild = lchild;
		node->rchild = rchild;
		node->item = data;
	}
	return node;
}

root init_bitree(Node *node){
	root r = node;
	return r;
}

void destroy_bitree(root root){
	Node *node = root;
	if(!node){
		printf("this tree is already null\n");
		return;
	}
	if(node->lchild != NULL){
		destroy_bitree(node->lchild);
	}
	if(node->rchild != NULL){
		destroy_bitree(node->rchild);
	}
	free(node);
	node = NULL;
	printf("del node finished\n");
}


void pre_search(root root){
	Node *node = root;
	if(node){
		printf("%d ",node->item);
		pre_search(node->lchild);
		pre_search(node->rchild);
	}
}

void mid_search(root root){
	Node *node = root;
	if(node){
		mid_search(node->lchild);
		printf("%d ",node->item);
		mid_search(node->rchild);
	}
}

void last_search(root root){
	Node *node = root;
	if(node){
		last_search(node->lchild);
		last_search(node->rchild);
		printf("%d ",node->item);
	}

}
