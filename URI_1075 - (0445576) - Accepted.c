#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int N,cont,D;
    scanf("%d",&N);
    
    for (cont = 1;cont <10000;cont = cont+1){
        
        D = cont%N;
        
        if (D == 2){
         printf("%d\n",cont);
              }
        
        }
    
    
   system("PAUSE");    
  return 0;  
    }
   
