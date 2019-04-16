/********************************************************************************************************/
/*	File name:	macros.c									*/
/*	Author:		Lorthar Mabandla								*/
/*	Date:		30 Mar 2019									*/
/*	Purpose:	Use of macros							 		*/
/*													*/
/********************************************************************************************************/
#include<stdio.h>
#define SQR(x) (x * x)
int main(void){
	float i =3;
	int k = 3;
	float f = SQR(i++);
	printf("i:	%f\nf:	%f\n",i,f);
	printf("\n\n%d\n k:%d \n", k++ * k++, k);
	return 0;
}

