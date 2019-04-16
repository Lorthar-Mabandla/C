#include<stdio.h>
#include<string.h>

int ft_strcmp(char *s1, char *s2){
	int i = 0, y;
	do{
		if(s1[i] == s2[i]){
			y = 0;
			i++;
		}
		else{
			return y = s1[i] - s2[i];	
		}
	}while((s1[i] != '\0') || (s2[i] != '\0'));
	return y;
}

int main(void){
	char str1[] = "cd", str2[] = "cd";
	printf("%d\n", ft_strcmp(str1, str2));
	return 0;
}	
