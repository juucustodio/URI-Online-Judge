#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
 int X,Y;
 scanf("%i",&X);
 Y = X%2;
 if (Y != 0){
    printf("%i\n",X);
    X=X+2;
    printf("%i\n",X);
    X=X+2;
    printf("%i\n",X); 
    X=X+2;
    printf("%i\n",X);
    X=X+2;
    printf("%i\n",X);
    X=X+2;
    printf("%i\n",X);               
}
 if (Y == 0)
 {
    X=X+1; 
    printf("%i\n",X);
    X=X+2;
    printf("%i\n",X); 
    X=X+2;
    printf("%i\n",X); 
    X=X+2;
    printf("%i\n",X); 
    X=X+2;
    printf("%i\n",X); 
    X=X+2;
    printf("%i\n",X);                           
       }
    
  return 0;  
    }
    
      
    
