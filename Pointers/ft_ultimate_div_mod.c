/********************************************************************************************************/
/*		File name:	ft_ultimate_div_mod.c							*/
/*		Author:		Lorthar Mabandla							*/
/*		Date:		26 Dec 2018								*/
/*		Purpose:	function divides parameters a by b. The result of this division		*/
/* 				is stored in the int pointed by a. The remainder of the division 	*/
/* 				is stored in the int pointed by b.					*/
/********************************************************************************************************/
void ft_ultimate_div_mod(int *a, int *b){
	int result = 0;
	while(*a >= *b){
		result += 1;
		*a -= *b;
	}
	*b = *a;
	*a = result;
	return;
}
