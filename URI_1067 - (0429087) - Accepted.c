#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int  cont,H,N;
    scanf("%i",&N);

    for (cont = 1;N>=cont;cont = cont+1)
    {
       H = cont % 2;
       if (H!=0)
       {
       printf("%i\n",cont);          
       }
   
          }
    
  return 0;  
    }
    
