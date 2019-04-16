/******************************************************************************************
 ********	file name:	ft_strdup.c					***********
 ********	Author:		Lorthar Mabandla				***********
 ********	Date:		31 March 2019					***********
 ********	Purpose:	implementation of strdup (man strdup)		***********
 *****************************************************************************************/
#include<stdlib.h>

char *ft_strdup(char *src){
	char *ptr;
	ptr = src;
	int i=0;
	while(*ptr != '\0'){
		ptr++;
		i++;
	}
	//ptr = NULL;
	ptr = (char *)malloc(i);
	for(int k=0; k<=i; k++)
		ptr[k] = src[k];
	return ptr;
}
	
