//ft_strlowcase.c
//function that transforms every letter of every word to lowcase

#include<stdio.h>

char *ft_strlowcase(char *str){
	for(int index = 0; str[index] !='\0'; index++){
		if((str[index] > 64) && (str[index] < 91))
			str[index] += 32;
	}
	return str;
}
int main(void){
	char str[] = "Lo9RThAZ";
	printf("%s\n",ft_strlowcase(str));
	return 0;
}
