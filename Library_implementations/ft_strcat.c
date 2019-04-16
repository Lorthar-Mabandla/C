/**************************************************************************************
 ******	File name:	ft_strcat.c						*******
 ******	Author:		Lorthar Mabandla					*******
 ******	Date:		28 March 2019						*******
 ******	Purpose:	Implementation of strcat. (man strcat)			*******
 *************************************************************************************/
#include<unistd.h>
#include "d05.h"
char *ft_strcat(char *dest, char *src){
	int i=0, k=1, j=1;
	while(k)
	       	dest[i] == '\0'? --k : i++;
	while(j)
		*src == '\0' ? --j, dest[i] = '\0' : (dest[i] = *src), ++i, ++src;
	return dest;
}
