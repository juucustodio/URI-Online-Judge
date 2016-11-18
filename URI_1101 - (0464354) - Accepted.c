#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	int X=0,M,N;
	
	scanf("%d %d",&M,&N);
	while (M > 0 && N > 0){
		X = 0;
		if (M <= N){	
		while (M <=N){
		X = X+M;
		printf("%d ",M);
		M = M+1;
		
		}
	
		}
		else
		{
		while (M >= N){
		X = X+N;
		printf("%d ",N);
		N = N+1;
		
		}		
		
		}
		
		printf("Sum=%d\n",X);
		scanf("%d %d",&M,&N);
	
	
	
	}

	

return 0;
}