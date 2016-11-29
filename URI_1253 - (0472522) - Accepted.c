#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X,T,N,cont,M;
	char vetor[60];
		
	scanf("%d",&X);
	while (X>0){
		scanf("%s",vetor);
		T = strlen(vetor);
		scanf("%d",&N);
		for(cont = 0;cont<T;cont++){
			if (vetor[cont]-N<65){
				M = N-(vetor[cont]-65);
				vetor[cont] = 91-M;
				printf("%c",vetor[cont]);	
			}	
			else{
			vetor[cont] = vetor[cont]-N;
			printf("%c",vetor[cont]);
			}
		}
		printf("\n");
		X = X-1;
	}
	return 0;
}