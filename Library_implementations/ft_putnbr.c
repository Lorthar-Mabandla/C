/******************************************************************************************************************************
 ********	file name:	ft_putnbr.c										*******
 ********	Author:		Lorthar Mabandla									*******
 ********	Date:		Modified 23 March 2019									*******
 ********	Purpose:	Display numbers on the output screen							*******
 *****************************************************************************************************************************/
#include<unistd.h>
#include "d05.h"

void ft_putnbr(int nb){
	int arr[10], i, state = 0;
	arr[0]  =  nb / 1000000000;
	arr[1]  = (nb / 100000000) % 10;
	arr[2]  = (nb / 10000000) % 10;
	arr[3]  = (nb / 1000000) % 10;
	arr[4]  = (nb / 100000) % 10;
	arr[5]  = (nb / 10000) % 10;
	arr[6]  = (nb / 1000) % 10;
	arr[7]  = (nb / 100) % 10;
	arr[8]	= (nb / 10) % 10;
	arr[9]  =  nb % 10;
	for(i=0; i < 10; i++){
		if((arr[i] == 0) && (state == 0)){ }
		else{	
			ft_putchar( arr[i] + 48);
			state = 1;
		}
	}
	if(state == 0)
		ft_putchar(48);
	ft_putchar('\n');
	return;
}

