/***********************************************************************************************/
/*    file name : gcd.c                                                                        */
/*    Author    : Lorthar Mabandla                                                             */
/*    Date      : May 24, 2019                                                                 */
/*    Purpose   : Program to find the highest common factor or gcd (greatest common divisor)    */
/***********************************************************************************************/
#include<stdio.h>
int gcd(int u, int v){
	int i;
	while(u>0){
		if(u<v){ printf("u<v u: %d\n",u);  i=u; u=v; v=i;  }
		u=u-v;
}
    printf("gcd: %d\n", v);
	return v;
}
