#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main (){

	int cont,X,N,A2,A1;
	scanf("%d",&N);
	X = 0;
	A2 = 1;
	A1 = 1;
	for (cont = 1; cont <=N; cont = cont +1){
	
	if (N>0 && N<=3){
		if (N == 1)
		printf("0\n");
		if (N == 2)
		printf("0 1\n");
		if (N == 3)
		printf("0 1 1\n");
	
	}
	else
	{
	if (cont <= 3){
	if (cont == 1)
		printf("0 ");
		if (cont == 2)
		printf("1 ");
		if (cont == 3)
		printf("1 ");		
	}
	else{
		X = A2+A1;
		if (cont == N){
		printf("%d\n",X);
		}
		else{
		printf("%d ",X);
		
		A2 = A1;
		A1 = X;
		
		}
	}
	
	
	}
	
	
	}




 return 0;
 
}