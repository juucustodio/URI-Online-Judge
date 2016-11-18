#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main (){
        
        int cont,P,par,i,H;
        int A,n;
        n=0;
        P=0;
        par=0;
        i=0;
        for (cont = 0;cont <5;cont=cont+1){
            scanf("%i",&A);
            if (A>0)
               P = P+1;
            if (A<0)
               n = n+1;    
            H=A%2;
            if (H==0)
               par = par+1;
            if (H!=0)
                i = i+1;      
            
            }
     
        printf("%i valor(es) par(es)\n%.i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",par,i,P,n);
  
    return 0;
}
