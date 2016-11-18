#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int X,Y,H,M;
    
    scanf("%i %i",&X,&Y);
    M = 0;

    if (X >= Y){
       while (X>=Y) {
          H = Y%13;
          if (H != 0){
          M = M+Y;   
          }
          Y = Y+1;   
             
             }    
          
          }
        else{
       while (Y>=X) {
          H = X%13;
          if (H != 0)
          {
                M = M+X;   
                }
          X = X+1;   
             
             }    
          
          }
          printf("%i\n",M);
    return 0;
}
