#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main () {

	int vetor[2050],n,cont,x;
	
	scanf("%d",&n);
	memset(vetor,(int)0,sizeof(int)*2050);
	
	for (cont = 0; cont<n; cont++){
		scanf("%d",&x);
		vetor[x] = vetor[x]+1;
		
	}
	
		for (cont = 0; cont<=2001; cont++){
			if (vetor[cont] != 0){
				printf("%d aparece %d vez(es)\n",cont,vetor[cont]);
			
			}
		
		}

return 0;
}