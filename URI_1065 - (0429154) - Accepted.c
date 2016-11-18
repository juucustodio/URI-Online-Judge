#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
   int P,H,N,cont;
    
   P = 0;
   for (cont=0;cont<5;cont=cont+1)
   {
       scanf("%i",&N);
       H = N%2;
       if (H==0)
       P = P+1;
       
       } 
     printf("%i valores pares\n",P);  
   
  return 0;  
    }
    
    
    
