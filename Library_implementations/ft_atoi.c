/****************************************************************************************/
/*		File name:	ft_atoi.c						*/
/*		Author:		Lorthar Mabandla					*/
/*		Date:		15 Feb 2019						*/
/*		Purpose:	implementation of atoi. (man atoi)			*/
/****************************************************************************************/
int ft_atoi(char *str){
	int i = 0;
	int k;
	while(*str == ' '){
		str++;
	}
LABEL:	if((*str == '0') || (*str == '1') || (*str == '2') || (*str == '3') || (*str == '4') || (*str == '5') || (*str == '6') || (*str == '7') ||(*str == '8') || (*str == '9')){
		i = i*10 + str[0] - '0';
		str++;
		goto LABEL;
	}
	return i;
}

