/*
	an iterated function that returns a number. 
	This number is the result of a factorial operation based on the number given as a parameter.
	If there’s an error, the function should return 0
*/
int ft_iterative_factorial(int nb){
	int result = 1;
	if(nb < 0) return result = 0;
	while(nb > 0){
		result *= nb;
		nb--;
	}
	return result;
}
      
