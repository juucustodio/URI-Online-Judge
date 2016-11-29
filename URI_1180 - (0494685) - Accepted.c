#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int cont,N, vetor[1000],P,M=6000;
	scanf("%d",&N);
	
	for (cont=0;cont<N;cont++){
		scanf("%d",&vetor[cont]);
		if (vetor[cont]<M){
			M = vetor[cont];
			P = cont;
		}
	}
	printf("Menor valor: %d\n",M);
	printf("Posicao: %d\n",P);


return 0;
}