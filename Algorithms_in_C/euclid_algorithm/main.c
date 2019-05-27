/**********************************************************/
/*    file name : main.c                                  */
/*    Author    : Lorthar                                 */
/*    Date      : 24 May 2019                             */
/*    Purpose   : main program for our euclid's algorithm */
/**********************************************************/
#include<stdio.h>
#include"euclid.h"

int main(void){
	int u,v;
	while(scanf("%d %d", &u, &v) != EOF){
		if((u>0) && (v>0)){
			if(v>u){ int i=u; u=v; v=i;  } //thus U>V is always true
			s_fraction(u, v, m_gcd(u,v));
	}
}
	return 0;
}
