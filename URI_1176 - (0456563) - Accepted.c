#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int cont,N,F;
	long long int mat[61]; 

	
		for (cont = 0;cont <61;cont++)		
			mat[cont]= 0;
		
		for(cont = 0; cont < 61;cont++){
			if(cont==0)
				mat[cont]=0;
			else if(cont==1)
				mat[cont]=1;
			else{
			mat[cont] = mat[cont-1]+mat[cont-2];
			
			}
				
		
		
		}

	scanf("%d",&N);
	
	while (N>0){
	
		scanf("%d",&F);
		printf("Fib(%d) = %lld\n",F,mat[F]);
		
		
		N = N-1;
	

	}



return 0;
}