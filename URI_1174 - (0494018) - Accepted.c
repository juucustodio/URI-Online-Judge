#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int cont,temp;
	double vetor[100];
	for(cont=0;cont<100;cont++)
		scanf("%lf",&vetor[cont]);

	for (cont=0;cont<100;cont++)
		if (vetor[cont]<=10.0){
			temp = vetor[cont];
			
			if ((vetor[cont]-temp)!=0)
				printf("A[%d] = %.1lf\n",cont,vetor[cont]);
			else
				printf("A[%d] = %.0lf\n",cont,vetor[cont]);	
		}
return 0;
}