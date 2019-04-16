/*******************************************************************************
 ********	file name:	ft_strlcat.c				********
 ********	Author:		Lorthar Mabandla			********
 ********	Date:		28 March 2019				********
 ********	Purpose:	implementation of strlcat (man strlcat) ********
 ******************************************************************************/
#include<unistd.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
	int i = 0, k = 1, j=1;
	while(k)
		dest[i] == '\0' ? --k : i++;
	while(j && (i<size))
		*src == '\0' ? --j, dest[i] = '\0' : (dest[i] = *src), ++i, ++src;
	return i;
}
