#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    
    int N;
    float X,Y,M;
              scanf("%i",&N);
    while (N > 0)
    {
          scanf("%f %f",&X,&Y);
          
          if (Y == 0)
          {

			printf("divisao impossivel\n");
                }
              
               
                   
          else {
                M = X/Y;
                printf("%.1f\n",M);
		    
		  
		  }
          
          
          
        N = N-1;  
          }   
    
    
    
    
            
    
   
    return 0;
    
}
