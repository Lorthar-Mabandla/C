/*******************************************************************************
 ********	file name:	ft_rev_params.c				********
 ********	Author:		Lorthar Mabandla			********
 ********	Date:		31 March 2019				********
 ********	Purpose:	Program to display all arguments in	********
 ********			   reverse order except for argv[0]	********
 ******************************************************************************/
#include<unistd.h>
#include "/.../Library_implementations/d05.h"

int main(int argc, char *argv[]){
	for(int i = argc -1 ; i>0 ; i--){
		for(int k=0; argv[i][k] != '\0' ; k++)
			ft_putchar(argv[i][k]);
		ft_putchar('\n');
	}
	return 0;
}
