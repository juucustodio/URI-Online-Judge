#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{

	int cont,vetor[10];
	
	for (cont = 0;cont<10;cont++)
		scanf("%d",&vetor[cont]);

	for (cont = 0;cont<10;cont++){		
		if (vetor[cont] <= 0){
			vetor[cont] = 1;
		}
		printf("X[%d] = %d\n",cont,vetor[cont]);
	}

return 0;
}