#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
	int X,cont,N,D,S;
	scanf("%d",&X);
	while(X>0){
	scanf("%d",&N);
	S = 0;
	for (cont=1;cont<N;cont++){
		D = N%cont;
		if (D == 0)
		S = S+cont;
		}
	if (S == N){
		printf("%d eh perfeito\n",N);
	}
	else
	{
		printf("%d nao eh perfeito\n",N);
	
	}
	X = X-1;
	}
	return 0;
}