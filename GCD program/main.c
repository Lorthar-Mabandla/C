/*********************************************************************************/
/*	File name:	gcd.h			 				 */
/*	Author:		Lorthar Mabandla					 */
/*	Purpose:	main function of program to implement the 		 */
/*			Euclidian Algorithm (greatest common divisor)		 */
/*********************************************************************************/
#include<stdio.h>
#include"gcd.h"

int main(void){
	int a, b;
	scanf("%d %d",&a,&b);
	printf("gcd:	%d\n", gcd(a,b));
	return 0;
}
