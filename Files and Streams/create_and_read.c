/****************************************************************************************/
/*		File name:	create_and_read.c					*/
/*		Author:		Lorthar Mabandla					*/
/*		Date:		22 March 2019						*/
/*		Purpose:	program to create a file and priint its contents	*/
/****************************************************************************************/
#include<stdio.h>

int main(void){
	FILE *f = fopen("file", "wt");
	char c;
	fputs("12A",f);
	fclose(f);
	f= fopen("file","r");
	fscanf(f,"%c",&c);
	printf("\n%c\n",c);
	fclose(f);
	return 0;
}
