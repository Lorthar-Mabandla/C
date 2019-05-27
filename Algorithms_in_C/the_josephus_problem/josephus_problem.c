/**************************************************************************************************/
/*    file name : josephus_problem.c                                                              */
/*    Author    : Lorthar Mabandla                                                                */
/*    Date      : 27 May 2019                                                                     */
/*    Purpose   : the josephus problem is solved in the spirit of the seive of Eratosthenes.      */
/*                We imagine that N people have decided to commit mass suicide by arranging       */
/*                themselves in a circle and killing the M-th person around the circle, cosing    */
/*                ranks as each person drops out of the circle.                                   */
/*      *NB*    : This is an implementation and use of a circular linked list                     */
/**************************************************************************************************/

#include<stdio.h>
#include<stdlib.h>

typedef struct NODE_{
	int key;
	struct NODE_ *next;
}NODE;
NODE *ptr, *temp;

void list_initialize(int N){
	ptr = (NODE *)malloc(sizeof *ptr);
	ptr->key = 1;
	temp = ptr;
	for(int i=2; i<=N; i++){
		ptr->next = (NODE *)malloc(sizeof *ptr);
		ptr= ptr->next;
		ptr->key = i;
	}
	ptr->next = temp;
	return;
}

void display_order(int M){
	while(ptr != ptr->next){
		for(int i=1; i<M; i++) ptr = ptr->next;
		printf("%d\t", ptr->next->key);
		temp = ptr->next;
		ptr->next = ptr->next->next;
		free(temp);
	}
	printf("%d\n",ptr->key);
	free(ptr);
}

int main(void){
	int N,M;
	printf("Enter the number of people\nEnter the M-th person to be executed\n");
	scanf("%d %d", &N, &M);
	printf("The order of execution is : ");
	list_initialize(N);
	display_order(M);
	return 0;
}
