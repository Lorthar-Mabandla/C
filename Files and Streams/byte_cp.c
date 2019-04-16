/************************************************************************/
/*	file name:	byte_cp.c					*/
/*	Author:		Lorthar Mabandla				*/
/*	Date:		26 March 2019					*/
/*	Purpose:	Program to copy binary files (bytes)		*/
/************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

//function declaration
void connect(char *src_file, char *dest_file);
void ft_byte_cp(FILE *src, FILE *dest);

void connect(char *src_file, char *dest_file){
	FILE *src,*dest;
	if((src =fopen(src_file, "rb")) == NULL){
		printf("src: %s\n",strerror(errno));
		return;
	}
	if((dest = fopen(dest_file,"wb")) == NULL){
		printf("dest: %s\n", strerror(errno));
		fclose(src);
		return;
	}
	else
		ft_byte_cp(src, dest);
	fclose(src);
	fclose(dest);
	return;
}

void ft_byte_cp(FILE *src, FILE *dest){
	char c[102400]; //100kB
	int read =0, write = 0;
	while((read = fread(c, 1, sizeof(c), src)) != 0)
		if((write = fwrite(c,1,sizeof(c),dest)) == 0)
			break;
	return;
}
int main(int argc, char *argv[]){
	if((argc == 2) && ((strcmp(argv[1], "-v") == 0) || (strcmp(argv[1],"-V") == 0))){
		printf("Author:		Lorthar Mabandla\n");
		printf("Version: 	function to copy byte files. Version 01\n");
		return 1;

	}
	else if(argc != 3){
		printf("Usage:	args... enter src and destination file\n");
		return 1;
	}
	else
		connect(argv[1], argv[2]);
	return 0;
}

