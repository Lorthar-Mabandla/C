/************************************************************************************************/
/*	File:		main.c									*/
/*	Author:		Lorthar Mabandla							*/
/*	Date:		19 March 2019								*/
/*	Purpose:	Collects inputs from the user to perform factorial.  			*/
/************************************************************************************************/
#include<stdio.h>
#include "factorial.h"

int main(void){
	int nb;
	printf("Enter number between 1-20\n");
	scanf("%d", &nb);
	if((nb < 0) || (nb > 20))
		printf("Number not in range\n");
	else{
		nb = factorial(nb);
		printf("Factorial is:  %d\n",nb);
	}
	return 0;
}	
