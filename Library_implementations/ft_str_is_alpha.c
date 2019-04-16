//ft_str_is_alpha.c
//function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character

#include<stdio.h>

int ft_str_is_alpha(char *str){
	int check; 
	//check is variable to store condition, whether string is alphabetical or not
	for(int index = 0; str[index] != '\0'; index++){
		if( ((str[index] > 64) && (str[index] <91)) || ((str[index] > 96) && (str[index] < 123)) ){
		//checking if string is alphabetical
			check = 1;
			//set check to 1 since string is alphabetical
		}
		else
		//this means that string contains characters that are not alphabetical
			return check = 0;
			//set check to 0 since string contains characters that are not alphabetical
	}
	return check;
	//return check = 1 since string contains alphabetical characters only.
}

int main(void){
	char str[] = "Lor@thar";
	printf("%d\n", ft_str_is_alpha(str));
	return 0;
}
