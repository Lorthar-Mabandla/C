/*
	a function that returns the square root of a number (if it exists), or 0 if the square root is an irrational number.
	function must return its result in less than two seconds.
*/
int ft_sqrt(int nb){
	int sqrt = 0, i;
	for(i = 0; i < nb ; i++){
 		if ( nb == i*i) sqrt = i;
	}
	return sqrt;
}

