/*************************************************************************************
 ******	file name:	ft_putstr.c						******
 ******	Author:		Lorthar Mabandla					******
 ******	Date:		Modified 28 March 2019					******
 ******	Purpose:	Function to print strings on the output display		******
 ************************************************************************************/
#include<unistd.h>
#include "d05.h"

void ft_putstr(char *str){
	while(*str != '\0'){
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
	return;
}
