/********************************************************************************************************/
/*		File name:	ft_putstr.c								*/
/*		Author:		Lorthar Mabandla							*/
/*		Date:		26 Dec 2018								*/
/*		Purpose:	function that displays a string of characters on the standard output.	*/
/********************************************************************************************************/

#include<unistd.h>

void ft_putchar(char c){
	write(1, &c, 1);
	return;
}
void ft_putstr(char *str){
	while(*str != '\0'){
		ft_putchar(*str);
		*str++;
	}
	return;
}
