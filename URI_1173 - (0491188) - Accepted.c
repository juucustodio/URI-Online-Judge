#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int N,cont,vetor[10];
	
	scanf("%d",&N);
	
	for (cont=0;cont<10;cont++){
		vetor[cont] = N;
		N = N*2;

	}
	for (cont=0;cont<10;cont++){
		printf("N[%d] = %d\n",cont,vetor[cont]);
	
	}	

	return 0;
}