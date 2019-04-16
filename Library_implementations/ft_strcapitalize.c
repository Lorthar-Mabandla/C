//ft_strcapitalize.c
//function that capitalizes the first letter of each word and transforms all other letters to lowercase

#include<stdio.h>

char *ft_strcapitalize(char *str){
	if((str[0] > 96) && (str[0] < 123))
		str[0] -= 32;
	for(int index = 1; str[index] != '\0'; index++){
		if((str[index -1] > 64) && (str[index -1] < 91)){ 
		//checking if previous letter is capitalized
			if((str[index] >64) && (str[index] <91)){
			//checkiing if the current letter after a capitalized letter is also capitalized. 
			//if condition is true, we decapitalize the current letter
				str[index] += 32;
			}
		}
		else if( ((str[index -1] >57) && (str[index -1] < 65)) || ((str[index -1] > 31) && (str[index -1] < 48)) ){
		//checking if the the previous letter is alphanumeric
			if((str[index] > 96) && (str[index] < 123)){
			//checking if current letter is lowercase
			//if current letter is lowercase, we capitalize it.
				str[index] -= 32;
			}
		}
		
	}
	return str;
}
int main(void){
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return 0;
}
				
