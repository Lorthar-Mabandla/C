/********************************************************************************************************/
/*	 File name:	 factorial.c								     	*/
/*	 Author:	 Lorthar Mabandla							     	*/
/*	 Date		 19 March 2019								     	*/
/*	 purpose: 	 Function to compute factorial							*/
/********************************************************************************************************/

int factorial(int n){
	return n ? n*factorial(n-1) : 1;
}
