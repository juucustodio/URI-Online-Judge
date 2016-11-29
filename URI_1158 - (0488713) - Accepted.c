#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int S=0,X,Y,N,cont,J;
	scanf("%d",&N);
	
	while (N>0){
	scanf("%d %d",&X,&Y);
	
	for (cont=1;cont<=Y;cont++){
		J = X%2;
		if (J != 0){
			S = S+X;
			X = X+2;
		}
		else{
		X = X+1;
		cont = cont-1;
		}
	}	
	printf("%d\n",S);	
	N=N-1;
	S = 0;
	}
	
return 0;
}