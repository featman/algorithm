/*
 * MDoBT.c
 *
 *  Created on: 2015��8��2��
 *      Author: Song Zhi-Cheng
 */


#include "General.h"


//�ݹ����
int maxDepth(struct TreeNode* root) {
	if(!root) return 0;
	int leftDept,rightDept;
	leftDept = maxDepth(root->left);
	rightDept = maxDepth(root->right);

	return leftDept>rightDept?leftDept+1:rightDept+1;
}

/*
Same Tree

Given two binary trees, write a function to check if they are equal or not.

Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
*/
bool isSameTree(struct TreeNode* p, struct TreeNode* q){
	if(!p&&!q) return true;
	if(p&&q)
		if(p->val != q->val)
			return false;

	if(!p&&q) return false;
	if(p&&!q) return false;

	return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}