/**********************************************************************************************************************************
 ********	file name:	ft_str_is_printable.c									***********
 ********	Author:		Lorthar Mabandla									***********
 ********	Date:		23 March 2019										***********
 ********	Purpose:	Function returns 1 if string contains printable characters only				***********
 ********			Function returns 0 if it contains any other character					***********
 *********************************************************************************************************************************/

#include<unistd.h>

int ft_str_is_printable(char *str){
	int nb = 1, i =0;
	while(str[i] != '\0'){
		((str[i] > 31) && (str[i] < 127)) ? i++ : (nb =0);
		if(nb == 0)
			return 0;
	}
	return 1;
}
