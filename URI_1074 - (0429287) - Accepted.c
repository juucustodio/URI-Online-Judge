#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int H,X,cont,j;
    scanf("%i",&j);
    
    for (cont = 0;cont <j;cont = cont+1)
    {
    scanf("%i",&X);
    H = X%2;
    if (H!=0 && X>0)
    printf("ODD POSITIVE\n");
    if (H==0 && X>0)
    printf("EVEN POSITIVE\n");
    if (H!=0 && X<0)
    printf("ODD NEGATIVE\n");
    if (H==0 && X<0)
    printf("EVEN NEGATIVE\n");        
    if (X == 0)
    printf("NULL\n");
    }
 
  return 0;  
    }
    
  
