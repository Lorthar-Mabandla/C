/*
	function that returns the next prime number greater or equal to the number given as argument.
	Function must return result in less than two seconds
*/
int ft_find_next_prime(int nb){
	int a, b, c;
	if(nb <= 1) nb = 2;
	else{
		for(a =2; a< nb ; a++){
			if(nb%a == 0){
				nb = ft_find_next_prime(nb + 1);
			}
		}
	}
	return nb;
}


