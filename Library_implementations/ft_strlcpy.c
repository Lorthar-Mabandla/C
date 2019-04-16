/***********************************************************************************************
 ********	file name:	ft_strlcpy.c						********
 ********	Author:		Lorthar Mabandla					********
 ********	Date:		28 March 2019						********
 ********	Purpose:	implementation of strlcpy (man strlcpy)			********
 **********************************************************************************************/
#include<unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	/*
	int i = 0, j = 1;
	while(j && (i<size))
		*src == '\0' ? --j, (dest[i] = '\0') : (dest[i] = *src), ++i, ++src;
	*/
	unsigned int k=0;
	for(k; (k<size) && (*src != '\0') ; ++src, ++k){
		dest[k] = src[k];
		//i = k;
	}
	//i += 1;
	dest[k] = '\0';
	
	return k;
}
