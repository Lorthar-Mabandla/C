#include<stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
	int i=0, y;
	do{
		if(s1[i] == s2[i]){
			y = 0;
			i++;
		}
		else{
			return s1[i] - s2[i];
		}
	}while((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')));
	return y;
}

int main(void){
	char str1[] = "abcDeeee", str2[] = "abcdeeee";
	printf("%d\n", ft_strncmp(str1, str2, 4));
	return 0;
}
