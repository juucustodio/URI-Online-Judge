#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    
    int N,cem,cin,vin,dez,fiv,doi,um; 
    scanf("%i",&N);
    printf("%i\n",N);
    cem=N/100;
    N=N%100;
    cin=N/50;
    N=N%50;
    vin=N/20;
    N=N%20;
    dez=N/10;
    N=N%10;
    fiv=N/5;
    N=N%5;
    doi=N/2;
    N=N%2;
    um=N/1;

    printf("%i nota(s) de R$ 100,00\n",cem);
    printf("%i nota(s) de R$ 50,00\n",cin);
    printf("%i nota(s) de R$ 20,00\n",vin);
    printf("%i nota(s) de R$ 10,00\n",dez); 
    printf("%i nota(s) de R$ 5,00\n",fiv);
    printf("%i nota(s) de R$ 2,00\n",doi);
    printf("%i nota(s) de R$ 1,00\n",um);
	
    return 0;
    
    }
   
