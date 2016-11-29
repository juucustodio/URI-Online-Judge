#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int cont;
	double vetor[100],X;
	scanf("%lf",&X);
	
	for (cont = 0;cont<100;cont++){
	
	vetor[cont] = X;

	X = X/2;
		
	}

	for(cont = 0;cont<100;cont++){
	
		printf("N[%d] = %.4lf\n",cont,vetor[cont]);
	}
return 0;
}