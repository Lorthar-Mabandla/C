/********************************************************************************************************/
/*		File name:	ft_strrev.c								*/
/*		Author:		Lorthar Mabandla							*/
/*		Date:		26 Dec 2018								*/
/*		Purpose:	function that reverses the order of characters in a string.		*/
/********************************************************************************************************/
#include<unistd.h> 
char *ft_strrev(char *str){
	char c;
	int j=0, k=0;
	while(str[k] != '\0'){
		k++; //Where K is the strlen
	}
	k--;
	while(k>j){
		c = str[j];
		str[j] = str[k];
		str[k] = c;
		j++;
		k--;
	}
	return str;
}

