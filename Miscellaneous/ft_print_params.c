/*********************************************************************************
 ********	file name:	ft_print_params.c			**********
 ********	Author:		Lorthar Mabandla			**********
 ********	Date:		31 March 2019				**********
 ********	Purpose:	program to print it's given parameters	**********
 ********************************************************************************/
#include<unistd.h>
#include "/.../Library_implementations/d05.h"

int main(int argc, char *argv[]){
	for(int i = 0; i<argc ; i++){
		for(int j=0; argv[i][j] != '\0' ; j++)
			ft_putchar(argv[i][j]);
		ft_putchar('\n');
	}
	return 0;
}

