/***************************************************************************************
 ********	file name:	ft_strncat.c					********
 ********	Author:		Lorthar Mabandla				********
 ********	Date:		28 March 2019					********
 ********	Purpose:	Implementation of stcncat (man strncat)		********
 **************************************************************************************/
#include<unistd.h>

char *ft_strncat(char *dest, char *src, int nb){
	int i=0,k=1,j=1;
	while(k)
		dest[i] == '\0' ? --k : i++;
	while(j && nb)
		*src == '\0' ? --j, dest[i] = '\0' : (dest[i] = *src), ++i, --nb, ++src;
	return dest;
}
