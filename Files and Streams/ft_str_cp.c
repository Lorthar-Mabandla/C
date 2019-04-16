/************************************************************************************************************************/
/*	file name:	ft_str_cp.c											*/
/*	Author:		Lorthar Mabandla										*/
/*	Date:		26 March 2019											*/
/*	Purpose:	Function to copy text files.									*/
/************************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

//function declarations
void connect(char *, char*);
void ft_str_cp(FILE *src, FILE *dest);

void connect(char *src_file, char *dest_file){
	FILE *src, *dest;
	if((src = fopen(src_file,"rt")) == NULL){
		printf("src: %s\n", strerror(errno));
		return;
	}
	if((dest = fopen(dest_file, "wt")) == NULL){
		printf("dest: %s\n", strerror(errno));
		return;
	}
	else{
		ft_str_cp(src, dest);
		fclose(src);
		fclose(dest);
		return;
	}
}
void ft_str_cp(FILE *src, FILE *dest){
	char c[500];
	while((fgets(c,499, src)) != NULL)
		if((fputs(c, dest)) == EOF)
			break;
	return;
}
int main(int argc, char *argv[]){
	if((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1],"-V") == 0)){
		printf("Author:		Lorthar Mabandla\n");
		printf("Version:	ft_str_cp (text files) implementation. Version 01\n");
		return 0;
	}
	else if(argc != 3){
		printf("Usage:	args... enter source file name and destination file name\n");
		return 0;
	}
	else
		connect(argv[1], argv[2]);
	return 0;
}
