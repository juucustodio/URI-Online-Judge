#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
int X,Z=0,cont,vetor[1000];
	scanf("%d",&X);
	for(cont=0;cont<1000;cont++){
		if (Z>(X-1)){
			Z =0;
			vetor[cont] = Z;
			printf("N[%d] = %d\n",cont,vetor[cont]);
			Z = Z+1;	
		}
		else
		{
			vetor[cont] = Z;
			printf("N[%d] = %d\n",cont,vetor[cont]);			
			Z = Z+1;
		}
		
	}
	


return 0;
}