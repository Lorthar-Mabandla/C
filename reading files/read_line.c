/****************************************************************************************/
/*		File name:	read_line.c						*/
/*		Author:		Lorthar Mabandla					*/
/*		Date:		22 March 2019						*/
/*		Purpose:	reads input file contents string by string		*/
/****************************************************************************************/
#include<stdio.h>
#include<string.h>
#include<errno.h>

/* Function Declarations */
void connect(char *file_name);
void read_line(FILE *file);

/* Function Definitions */
void connect(char *file_name){
	FILE *file;
	if((file = fopen(file_name, "rt")) == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	else{
		read_line(file);
		fclose(file);
	}
	return;
}
void read_line(FILE *file){
	char str[2];
	while(fgets(str, sizeof(str), file) != NULL)
		printf("%s", str);
	printf("\a\n");
	return;
}

int main(int argc, char *argv[]){
	connect(argv[1]);
	return 0;
}
