/************************************************************************************************
 ********	file name:	ft_ultimate_range.c					*********
 ********	Author:		Lorthar Mabandla					*********
 ********	Date:		31 March 2019, Modified 05 April 2019			*********
 ********	Purpose:	Function which allocates and assigns an int array	*********
 ***********************************************************************************************/
#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max){
	int i = max-min;
	if( min >=max){
		(*range) = (void *)0;
		return 0;
	}
	(*range) = (int *)malloc(i * sizeof(int));
	for(int x=0 ; min<max ; min++,x++)
		(*range)[x] = min;
	return i;
}
