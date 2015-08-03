/*
 * MDoBT.h
 *
 *  Created on: 2015��8��2��
 *      Author: Song Zhi-Cheng
 */

#ifndef GENERAL_H_
#define GENERAL_H_
#define false 0
#define true 1

typedef int bool;

int singleNumber(int* nums, int numsSize);


struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};



#endif /* GENERAL_H_ */