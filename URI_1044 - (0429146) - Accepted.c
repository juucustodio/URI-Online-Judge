#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
   int A,B,M;
   scanf("%i %i",&A,&B);
   M = A%B;
   if (M == 0)
      printf("Sao Multiplos\n");
   M = B%A;
   if (M == 0)
      printf("Sao Multiplos\n");   
    
  return 0;  
    }
    
    
    
