/*
	function ft_fibonacci that returns the n-th element of the Fibonacci sequence, the first element being at the 0 index. 
	We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2
	If the index is less than 0, the function should return -1
*/
int ft_fibonacci(int index){
	int next;
	if(index < 0) next = -1;
	else if(index == 0) next = 0;
	else if(index == 1) next = 1;
	else{
		next = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return next;
}

