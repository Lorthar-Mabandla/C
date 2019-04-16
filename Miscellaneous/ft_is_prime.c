/*
	function that returns 1 if the number given as a parameter is a prime number, and 0 if it isn’t.
	0 and 1 are not prime numbers.
	Function must return result in less than two seconds.
*/
int ft_is_prime(int nb){
	int a;
       if(nb < 2) return 0;
       else{	       
		for(a=2; a<nb ; a++){
	      		if( nb%a == 0) return 0;
       		}
       }
       return 1;
}

