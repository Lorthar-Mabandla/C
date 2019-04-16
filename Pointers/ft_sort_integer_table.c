/********************************************************************************************************/
/*		File name:	ft_sort_integer_table.c							*/
/*		Author:		Lorthar Mabandla							*/
/*		Date:		15 Feb 2019								*/
/*		Purpose:	function which sorts an array (table) of integers by ascending order	*/
/*				arguments are a pointer to int and the number of ints in the array.	*/
/********************************************************************************************************/
void ft_sort_integer_table(int *tab, int size){
	int i, j,$temp;
	for(i=0; i<size ; i++){
		for(j=i+1; j<size ;j++){
		       if(tab[i]>tab[j]){
		             $temp = tab[i];
			     tab[i] = tab[j];
	 		     tab[j] = $temp;
			}
       		}
	}
	return;
}	

