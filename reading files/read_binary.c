/********************************************************************************/
/*		File name:	read_binary.c					*/
/*		Author:		Lorthar Mabandla				*/
/*		Date:		22 March 2019					*/
/*		Purpose:	Reads contents of a binary file			*/
/********************************************************************************/
#include<stdio.h>
#include<errno.h>
#include<string.h>

void connect(char *file_name){
	FILE *file;
	int read;
	unsigned char buffer[1024];
	if((file = fopen(file_name, "rb")) == NULL){
		printf("%s\n", strerror(errno));
		return;
	}
	else{
		do{
			read = fread(buffer,1,  sizeof(buffer), file);
			//fread() returns the number of successfully read portions
			for(int a = 0; a<1 ; a++)
				printf("%02X", buffer[a]);
		}while(read>0);
		fclose(file);
	}
	return;
}

int main(int argc, char *argv[]){
	connect(argv[1]);
	return 0;
}
