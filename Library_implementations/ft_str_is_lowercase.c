/*********************************************************************************************************************************
 ***********	file name:	ft_str_is_lowercase.c									**********
 ***********	Author:		Lorthar Mabandla									**********
 ***********	Date:		23 March 2019										**********
 ***********	Purpose:	Functions returns 1 if str contains lowercase characters only				**********
 ***********			Returns 0, if string contains any other characters					**********
 ********************************************************************************************************************************/
#include<unistd.h>

int ft_str_is_lowercase(char *str){
	int nb, i=0;
	while(str[i] != '\0'){
		((str[i] >96) && (str[i] < 123)) ? i++ : (nb = 0);
		if(nb == 0)
			return 0;
	}
	return 1;
}
