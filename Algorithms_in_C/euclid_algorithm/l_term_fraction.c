#include<stdio.h>
#include"euclid.h"

typedef struct fraction{ 
    int numerator; 
    int denominator; 
} Fract;

int main(void){
	Fract input;
	while(scanf("%d %d", &input.numerator, &input.denominator) != EOF){
		if((input.denominator > 0) && (input.numerator > 0)){
			s_fraction(input.denominator, input.numerator, m_gcd(input.denominator, input.numerator));
		}
	}
	return 0;
}
