/*
 * Stack.c
 *
 *  Created on: 2015��3��29��
 *      Author: lorne
 *
 */

#include "BSTree.h"


int CreateBSTree(BSTree *bst,int value){
	*bst = (BSTree)malloc(sizeof(struct BSTree));
	if(*bst == NULL){
		printf("Create BSTree Err\n");
		return 0;
	}

	(*bst)->item = value;
	(*bst)->lchild = NULL;
	(*bst)->rchild = NULL;
	return 1;
}

int InsertBSTree(BSTree bst,int value){
	if(bst!=NULL){
		if(value < bst->item) InsertBSTree(bst->lchild,value);
		else if(value > bst->item) InsertBSTree(bst->rchild,value);
	}else{
		BSTnode *node = (BSTnode*)malloc(sizeof(struct BSTree));
		if(!node) return 0;
		node->item = value;
		bst = node;
	}
	return 1;
}


int SearchBSTree(BSTree bst,int value){
	if(!bst){
		printf("Search BSTree Err,NULL BSTree\n");
		return 0;
	}
	if(value == bst->item){
		printf("SearchOKay\n");
		return 1;
	}else if(value < bst->item){
		return SearchBSTree(bst->lchild,value);
	}else{
		return SearchBSTree(bst->rchild,value);
	}
}

//int DestroyBSTree(BSTree bst,int value){
//}
