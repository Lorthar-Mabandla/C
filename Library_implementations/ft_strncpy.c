#include<stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
	int i=0;
	while((i<n) && (src[i] != '\0')){
		dest[i] = src[i];
		i++;
	}
	//if(i<n)
	//	dest[i] = '\0';
	return dest;
}
int main(void){
	char str[10];
	ft_strncpy(str , "MabandlaMASDFGHKLJOYOGPGDKBKGLFD", 10);
	printf("%s \n", str);
	return 0;
}
