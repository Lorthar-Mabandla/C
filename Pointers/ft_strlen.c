/********************************************************************************************************/
/*		File name:	ft_putstr.c								*/
/*		Author:		Lorthar Mabandla							*/
/*		Date:		26 Dec 2018								*/
/*		Purpose:	function that counts and returns the number of characters in a string	*/
/********************************************************************************************************/
#include<unistd.h>

int ft_strlen(char *str){
	int num = 0;
	while(*str != '\0'){
		num += 1;
		*str++;
	}
	return num;
}

