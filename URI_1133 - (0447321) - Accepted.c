#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int X,Y,R;
    scanf("%i %i",&X,&Y);
    
    if (X<Y){
    X = X+1;
    while (X<Y)
    {
          R = X%5;
          
          if(R==2)
          printf("%i\n",X);
          if (R==3) 
          printf("%i\n",X);
                    
          X = X+1;
          }
    
}
    else{
         Y = Y+1;
     while (Y<X)
           {
              R = Y%5;
          
              if(R==2)
              printf("%i\n",Y);
              if (R==3) 
              printf("%i\n",Y);
                    
                    Y = Y+1;
           }
         
         
         
    
}
          system("PAUSE");    
  return 0;  
    }
    
  
