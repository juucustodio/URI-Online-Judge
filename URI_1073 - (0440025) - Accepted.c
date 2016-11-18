#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
         int N,Z,P,T;
         Z = 1;
         scanf("%i",&N);
         while (Z <= N )
         {
           P = Z%2;
           if (P == 0)
           {
              T = Z*Z;
              printf("%i^2 = %i\n",Z,T);   
                 }   
               Z = Z+1;
               }   
    
	
    return 0;
    
    }    
       
