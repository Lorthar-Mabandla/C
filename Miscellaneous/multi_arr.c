/****************************************************************************************/
/*	File name:	multi_arr.c							*/
/*	Author:		Lorthar Mabandla						*/
/*	Date:		19 March 2019							*/
/*	Purpose:	Program to print multi dimensional array			*/
/****************************************************************************************/
#include<stdio.h>

void multi_arr(int *ptr){
	for(int i=0; i<3 ; i++){
		for(int j=0; j<3; j++){
			printf("%d\t",(ptr + (3*i))[j]);
		}
	}
	printf("\n");
	return;
}
int main(void){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9},*p, **ptr;
	p = &(arr[0][0]);
	multi_arr(p);

	return 0;
}
