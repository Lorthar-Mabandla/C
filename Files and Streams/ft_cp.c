/****************************************************************************************************************/
/*	File name:	ft_cp.c											*/
/*	Author:		Lorthar Mabandla									*/
/*	Date: 		23 March 2019										*/
/*	Purpose:	Implementation of cp (copying files) in UNIX and WINDOWS systems.			*/
/****************************************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

//function declaration
void connect(char *src_file, char *dest_file);
void ft_cp(FILE *src, FILE *dest);


void connect(char *src_file, char *dest_file){
	FILE *src, *dest;
	if((src = fopen(src_file, "rb")) == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	if((dest = fopen(dest_file, "wb")) == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	else{
		ft_cp(src,dest);
		fclose(src);
		fclose(dest);
		return;
	}
}
void ft_cp(FILE *src, FILE *dest){
	char c;
	while((c = fgetc(src)) != EOF)
		if((fputc(c,dest)) == EOF)
			break;
	return;
}
int main(int argc, char *argv[]){
	if((strcmp(argv[1],"-v") == 0) || (strcmp(argv[1], "-V") == 1)){
	       printf("Author:		Lorthar Mabandla\n");
	       printf("Version:		Implementation of cp (copy) function in WINDOWS & UNIX Systems. Version 01\n");
	       return 0;
	}
	else if(argc != 3){
		printf("Usage: args... Enter source and destination files\n");
		return 0;
	}
	else
		connect(argv[1], argv[2]);
	return 0;
}
