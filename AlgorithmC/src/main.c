/*
 ============================================================================
 Name        : algorithmC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "General.h"


int main(void) {

	int arr[] = {9,52,8,7,23,6,51,5,4,91,3,33,2,1};
	//heapSort(arr,9);
	quickSort(arr,0,13);
	int i ;
	for(i=0;i<14;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
