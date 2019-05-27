/*************************************************************************/
/*    file name : prime.c                                                */
/*    Author    : Lorthar Mabandla                                       */
/*    Date      : 26 May 2019                                            */
/*    Purpose   : program to print prime numbers less than 1000          */
/*                set a[i] to 1, if 'i' is prime, 0 if it not.           */
/*************************************************************************/

#include<stdio.h>
#define N 1000

int main(void){
	int i,j, a[N+1];
	for(a[1]=0, i=2; i<=N; i++)
		a[i]=1; //turning all the fields on ( = 1)
	for(i=2; j<=N/2; j++)
		for(j=2; j<=N/i; j++)
			a[i*j]=0; //generating multiples of the current index and turning them off (*i = 0)
	for(i=1; i<=N; i++)
		if(a[i])
			printf("%5d",i); //if the field is on, print the index
	printf("\n");
	return 0;
}
