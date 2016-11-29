#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	int cont,Cimpar=0,Cpar=0,D,N=15,impar[5],par[5],X;
	
	while (N>0){
		
		scanf("%d",&X);
		D = X%2;
		if (D == 0){
			if (Cpar <=4){
				par[Cpar] = X;
				Cpar=Cpar+1;
			}
			if (Cpar == 5){

				par[Cpar] = X;
				Cpar = Cpar+1;				
				for(cont = 0;cont<5;cont++){
					printf("par[%d] = %d\n",cont,par[cont]);
				}
				Cpar = 0;
			}
	
		}
		else{
			if (Cimpar <=4){
				impar[Cimpar] = X;
				Cimpar=Cimpar+1;
			}
			if (Cimpar == 5){

				impar[Cimpar] = X;
				Cimpar = Cimpar+1;				
				for(cont = 0;cont<5;cont++){
					printf("impar[%d] = %d\n",cont,impar[cont]);
				}
				Cimpar = 0;
			}		
		
		}
			
	N = N-1;
	}
	if (Cimpar != 0){
		for (cont = 0;cont <=(Cimpar-1);cont++)
					printf("impar[%d] = %d\n",cont,impar[cont]);
	
	}
	if (Cpar != 0){
		for (cont = 0;cont <=(Cpar-1);cont++)
					printf("par[%d] = %d\n",cont,par[cont]);
	
	}
return 0;
}