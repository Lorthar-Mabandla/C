/********************************************************************************/
/*		file name:	conventions.c					*/
/*		Author:		Lorthar Mabandla				*/
/*		Date:		22 Mar 2019					*/
/*		Purpose:	program to follow C conventions			*/
/*				-v shows version				*/
/*				no arguments shows how to use program		*/
/********************************************************************************/
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	if(argc == 1){
		printf("Usage: args arg1 arg2 arg3 ...\n");
		return 1;
	}
	else if((argc == 2) && ( ((strcmp(argv[1], "-v") == 0) || ((strcmp(argv[1], "-V")) == 0 ) )) ){
		printf("C Language Certified Associate. 2019 1st Quarter\n");
		return 2;
	}
	else{
		for(int i=0; i<argc ; i++)
			printf("%s\n", argv[i]);
		return 0;
	}
}
