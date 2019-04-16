/************************************************************************************************/
/*		File name:	ft_div_mod.c							*/
/*		Author:		Lorthar Mabandla						*/
/*		Date:		26 Dec 2018							*/
/*		Purpose:	function divides parameters a by b and stores the		*/
/*				result in the int pointed by div. It also stores the 		*/
/*				remainder of the division of a by b in the int pointed by mod.	*/
/************************************************************************************************/
void ft_div_mod(int *a, int *b, int *div, int *mod){
	int result = 0;
	int temp;
        temp = *a;	
	while(temp >= *b){
		result += 1;
		temp -= *b;
	}
	*div = result;
	*mod = temp;
	return;
}

