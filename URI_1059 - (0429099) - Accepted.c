#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
   int N,H;
   
   for (N = 1;N<=100;N=N+1)
   {
      H = N % 2;
      if (H == 0) 
       printf("%i\n",N);
       }  
    
  return 0;  
    }
    
    
