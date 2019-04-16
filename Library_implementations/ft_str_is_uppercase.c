/*********************************************************************************************************************************
 **********	File name:	ft_str_is_uppercase.c									**********
 **********	Author:		Lorthar Mabandla									**********
 ********** 	Date:		23 March 2019										**********
 **********	Purpose:	Function that returns 1 if string contains uppercase alphabetical characters only	**********
 **********			Function returns 0 if string contains other characters.					**********
 **********			Function returns 1 if string is empty							**********
 ********************************************************************************************************************************/
#include<unistd.h>

int ft_str_is_uppercase(char *str){
	int nb, i=0;
	while(str[i] != '\0'){
		((str[i] > 64) && (str[i] < 91)) ? i++ : (nb =0);
		if(nb == 0)
			return 0;
	}
	return 1;
}
