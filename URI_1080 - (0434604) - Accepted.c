#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int X,P,M,cont;
	M = 0;
	for (cont = 1;cont<=100;cont = cont+1){
		scanf("%i",&X);
		
		if (X>M){
			M = X;
			P = cont;
		
		}
	
	
	}
	printf("%i\n%i\n",M,P);
	return 0;
}