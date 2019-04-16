// ft_strupcase.c
// function that transforms every letter of every word to uppercase.

#include<stdio.h>

char *ft_strupcase(char *str){
	for(int index = 0; str[index] != '\0' ; index++){
		if((str[index] > 96) &&  (str[index] < 123)){
			str[index] -= 32;
		}
	}
	return str;
}
int main(void){
	char str[] = "LOr9tZa azr";
	printf("%s\n", ft_strupcase(str));
	return 0;
}
			
