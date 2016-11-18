#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
  int X,A,B,C;
  A =1;
  B =2;
  C =3;
  scanf("%i",&X);
  while (X>0)
  {
     printf("%i %i %i PUM\n",A,B,C);   
     A = A+4;
     B = B+4;
     C = C+4; 
        
     X = X-1;   
        }  
   
  return 0;  
    }
    
  
