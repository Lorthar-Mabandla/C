/***************************************************************************************
 ********	file name:	ft_range.c					********
 ********	Author:		Lorthar Mabandla				********
 ********	Date:		31 March 2019					********
 ********	Purpose:	function that returns an array if integers	********
 **************************************************************************************/
#include<stdlib.h>

int *ft_range(int min, int max){
	int *ptr;
	if((max-min) <= 0)
		return ptr = NULL;
	ptr = (int *)malloc((max-min) * 4);
	for(int i =0; min <max; i++,min++)
		ptr[i] = min;
	return ptr;
}
