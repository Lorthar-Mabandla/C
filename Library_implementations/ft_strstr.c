#include<stdio.h>

char *ft_strstr(char *str, char *to_find){
	int i=0, j=0,  index = 0, k =0;
	while(str[i] != '\0'){
		if(to_find[j]  == str[i]){
			index  = i;
			k = i;
			while((to_find[j] != '\0') && (str[k] == to_find[j])){
				k++;
				j++;
			}
			if(to_find[j] == '\0')
				return str = &(str[index]);
		}
		i++;	
	}
	return NULL;
}
int main(void){
	char str[] = "Mabandla", str2[] = "bed";
	printf("String : %s\n",ft_strstr(str, str2));
	return 0;
}	
