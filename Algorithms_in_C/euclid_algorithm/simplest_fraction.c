/******************************************************************************************/
/*        file name : simplest_fraction.c                                                 */
/*        Author    : Lorthar Mabandla                                                    */
/*        Date      : 24 May 2019                                                         */
/*        Purpose   : program to calculate the the simplest fraction                      */
/******************************************************************************************/
#include<stdio.h>
void s_fraction(int u,int v, int i){
	u = u/i;
	v = v/i;
	printf("The simplest proper fraction is %d/%d\n", v,u);
	return;
}
