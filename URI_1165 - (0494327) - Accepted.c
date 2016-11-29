#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int N,Z,X,W,cont;
	scanf("%d",&N);
	
	while (N>0){
		W = 0;
		scanf("%d",&X);
	
		for (cont = 2;cont<X;cont++){
			Z = X%cont;
			if (Z == 0)
				W = 1;
				
		}
	
		if (W == 1){
			printf("%d nao eh primo\n",X);
		}
		else{
			printf("%d eh primo\n",X);
		}
	
	
	
	
	N = N-1;
	}	


return 0;
}