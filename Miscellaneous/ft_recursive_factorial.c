/*
	a recursive function that returns the factorial of the number given as a parameter.
	• If there’s an error, the function should return 0.
*/
int ft_recursive_factorial(double nb){
	double result;
	if (nb < 0) result = 0;
	else if(nb == 0) result = 1;
	else{
		result = nb * ft_recursive_factorial(nb-1);
	}
	return result;
}

