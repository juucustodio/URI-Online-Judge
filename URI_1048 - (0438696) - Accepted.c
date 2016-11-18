#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main () {

	float S,T,R;
	int P;
	scanf("%f",&S);
	
	if (S>=0 && S<=400.00){
		T = (S*0.15)+S;
		R = S*0.15;
		P = 15;
	}
	if (S > 400.00 && S<= 800.00){
	
		T = (S*0.12)+S;
		R = S*0.12;
		P = 12;
	
	}
	if (S > 800.00 && S<= 1200.00){
	
		T = (S*0.10)+S;
		R = S*0.10;
		P = 10;
	
	}
	if (S > 1200.00 && S<= 2000.00){
	
		T = (S*0.07)+S;
		R = S*0.07;
		P = 7;
	
	}	
		if (S > 2000.00){
	
		T = (S*0.04)+S;
		R = S*0.04;
		P = 4;
	
	}	
	
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %i %\n",T,R,P);
	
return 0;
}