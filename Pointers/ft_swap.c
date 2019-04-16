/****************************************************************************************/
/*		File name:	ft_swap.c						*/
/*		Author:		Lorthar Mabandla					*/
/*		Date:		26 Dec 2018						*/
/*		Purpose:	function that swaps the value of two integers whose 	*/
/*				addresses are entered as parameters.			*/
/****************************************************************************************/

void ft_swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp; 
	return;
}

