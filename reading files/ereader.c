/****************************************************************************************************************/
/*	File:		ereader.c										*/
/*	Author:		Lorthar Mabandla									*/
/*	Date:		21 March 2019										*/	
/*	Purpose:	Unix program to open text files								*/
/****************************************************************************************************************/
#include<stdio.h>
#include<errno.h>
#include<string.h>

void read(FILE *file);
void connect(char *src);

void connect(char *src){
	FILE *txt;
	/****	this could also work 
	 ****		src = "mytxt.txt"
	 ****	or	src = "/directory.../mytxt.txt"	
	 ***/
	if((txt = fopen(src, "rt"))== NULL){
		printf("Error, failed to open file\n");
		printf("ERROR Number is : %d\n", errno);
		printf("ERROR MEANING: %s\n", strerror(errno));
	}
	else{
		printf("Success in connecting\n");
		printf("\n");
		read(txt);
		fclose(txt);

	}
	return;
}

void read(FILE *file){
	char c;
	while((c = fgetc(file)) != -1)
		printf("%c",c);
	printf("\a");
	return;
}


int main(int argc, char *argv[]){
	if((argc == 1) || (argc > 2)){
		printf("Usage: args... enter 1 file name\n");
       		return 0;
	}
	else if((strcmp(argv[1],"-v") == 0) || ((strcmp(argv[1],"-V") == 0))){
		printf("Author: 	Lorthar Mabandla \nProgram Name:	Ereader version 1.0.0\n");
		return 0;
	}
	else
		connect(argv[1]);
	return 0;
}

