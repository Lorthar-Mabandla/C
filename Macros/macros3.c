/********************************************************************************************************/
/*	File name:	macros3.c									*/
/*	Author:		Lorthar Mabandla								*/
/*	Date:		30 Mar 2019									*/
/*	Purpose:	Use of macros							 		*/
/*													*/
/********************************************************************************************************/
#include<stdio.h>
#define MAX(X,Y)    (((X) > (Y)) ? (X):(Y))
#define MAX3(X,Y,Z) (MAX((MAX((X),(Y))),(MAX((Y),(Z)))))

int main(void) {
	int a = 1, b = 2, c = 3, w;
	w = MAX3(a + 1,b - 1,2 * c);
	printf("%d\n",w);
	return 0;
}
