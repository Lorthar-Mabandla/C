/********************************************************************************************************/
/*	File name:	macros2.c									*/
/*	Author:		Lorthar Mabandla								*/
/*	Date:		30 Mar 2019									*/
/*	Purpose:	Use of macros							 		*/
/*													*/
/********************************************************************************************************/
#include<stdio.h>
#define MAX(x,y) (((x)>(y)) ? (x) : (y))
int main(void){
	int var, var1 =100, var2 = 200;
	float v, v1 = -1.0,v2 = 1.0;
	var = MAX(var1, var2);
	v = MAX(v1, v2);
	printf("var :	%d\nv:	%f\n",var,v);
	return 0;
}
