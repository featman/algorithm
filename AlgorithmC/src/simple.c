/*
 * SingNumber.c
 *
 *  Created on: 2015��8��2��
 *      Author: Song Zhi-Cheng
 */




int singleNumber(int* nums, int numsSize) {

	int i,res = 0;
	for(i=0;i<numsSize;i++){
		res ^=nums[i];
	}
	return res;

}