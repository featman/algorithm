/*
 ============================================================================
 Name        : MybiTree.c
 Author      : lorne
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "bitree.h"

int main(void) {
	Node *n8 = create_node(1000,NULL,NULL);
	Node *n1 = create_node(55,NULL,n8);
	Node *n2 = create_node(100,NULL,NULL);
	Node *n3 = create_node(1,n1,n2);
	Node *n4 = create_node(2,NULL,NULL);
	Node *n5 = create_node(3,NULL,NULL);
	Node *n6 = create_node(4,n4,n5);
	Node *n7 = create_node(5,n3,n6);

	root r = init_bitree(n7);
	pre_search(r);
	printf("\n");
	mid_search(r);
	printf("\n");
	last_search(r);
	printf("\n");
	destroy_bitree(r);
	return 0;
}
