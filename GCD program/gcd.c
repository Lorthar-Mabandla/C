/************************************************************************/
/*	File name:	gcd.c						*/
/*	Author:		Lorthar Mabandla				*/
/*	Purpose:	function to implement the Euclidian Algorithm 	*/
/*				(greatest common divisor)		*/
/************************************************************************/
int gcd(int a, int b){
	int x,y;
	(a>b) ? ((x=a),(y=b)) : ((x=b),(y=a)); //sort so that (X>Y) is always true
	if(x==0)
		return y;
	if(y==0)
		return x;
	if(x%y == 0)
		return y;
	int i = x%y;
	while(y%i != 0)
		i = y%i;
	return i;
}

