/*
	a recursive function that returns the value of a power applied to a number
	Any power lower than 0 returns 0. 
	Overflows are not handled
	function must return its result in less than two seconds	
*/	
int ft_recursive_power(int nb, int power){
	int result = 1;
	if(power < 0) result = 0;
	else if (power == 0) result = 1;
	else{
		result *= nb * ft_recursive_power(nb, power -1);
	}
	return result;
}

