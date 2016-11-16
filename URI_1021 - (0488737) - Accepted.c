#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){

	float X;
	int cem=0,cin=0,vin=0,dez=0,fiv=0,doi=0,um=0,mcin=0,mvin=0,mdez=0,mcinco=0,mum=0;
	
	scanf("%f",&X);
	if (X>=100.00)
	while (X >= 100.00){
	
	cem = cem+1;
	X = X-100.00;
	
	}
	while (X >= 50.00){
	
	cin = cin+1;
	X = X-50.00;
	
	
	}	
	while (X >= 20.00){
	
	vin = vin+1;
	X=X-20.00; 
	
	}
	while (X >= 10.00){
	
	dez = dez+1;
	X = X-10.00;
	
	
	}
	while (X >= 5.00){
	
	
	fiv = fiv +1;
	X = X-5.00;
	
	}	
		while (X>= 2.00){
	
		doi = doi+1;
		X = X-2.00;
			
		}
		while (X >= 1.00){
	
		um = um+1;
		X = X - 1.00;
	
	
	}
		while (X >= 0.50){
	
			mcin = mcin+1;
			X = X-0.50;
	
	
	}
		while (X >= 0.25){
	
		mvin = mvin+1;
		X = X-0.25;
	}
	while (X >= 0.10){
	
		mdez = mdez+1;
		X = X-0.10;
	
	}
		while (X >= .05){
	
		mcinco = mcinco +1;
		X = X-0.05;
	
	
	}
	while (X > .009){
	
		mum = mum+1;
		X = X-0.01;
	
	}	
	
	printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n",cem);
    printf("%i nota(s) de R$ 50.00\n",cin);
    printf("%i nota(s) de R$ 20.00\n",vin);
    printf("%i nota(s) de R$ 10.00\n",dez); 
    printf("%i nota(s) de R$ 5.00\n",fiv);
    printf("%i nota(s) de R$ 2.00\n",doi);
    printf("MOEDAS:\n");    
    printf("%i moeda(s) de R$ 1.00\n",um);
    printf("%i moeda(s) de R$ 0.50\n",mcin);
    printf("%i moeda(s) de R$ 0.25\n",mvin);
    printf("%i moeda(s) de R$ 0.10\n",mdez);
    printf("%i moeda(s) de R$ 0.05\n",mcinco);
    printf("%i moeda(s) de R$ 0.01\n",mum);                    
          
		
	return 0;
}