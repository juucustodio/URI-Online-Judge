#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
   int H,cont;
   float N; 
   H = 0;
   for (cont=0;cont<6;cont=cont+1)
   {
       scanf("%f",&N);
       if (N>0.0)
       H = H+1;
       
       } 
     printf("%i valores positivos\n",H);  
    
  return 0;  
    }
    
    
    
