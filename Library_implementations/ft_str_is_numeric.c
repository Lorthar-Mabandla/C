/*******************************************************************************************************************************************
 **************	File name:	ft_str_is_numberic.c										************
 **************	Author:		Lorthar Mabandla										************
 **************	Date: 		23 March 2019											************
 ************** Purpose:	Function that returns 1 if the string given as a parameter contains on digits.			************
***************			Function returns 0 if it contains any other characters.						************
***************			Function should returns 1 if the string is empty.						************
*******************************************************************************************************************************************/
#include<unistd.h>

int ft_str_is_numeric(char *str){
	int nb =1, i = 0;
	while(str[i] != '\0'){
		((str[i] > 47) && (str[i] < 58)) ? i++ : (nb =0);
		if(nb == 0)
			return 0;
	}
	return 1;
}
		
