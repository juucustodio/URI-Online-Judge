#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main ()
{
    int D;
    scanf ("%i",&D);
    
    if ((D == 61)|| (D == 71)||(D == 21)||(D == 32)||(D == 19)||(D == 27)||(D == 31)||(D == 11)){
           if (D == 61)
              printf("Brasilia\n");
           if (D == 71)
              printf("Salvador\n");           
           if (D == 21)
              printf("Rio de Janeiro\n");
           if (D == 32)
              printf("Juiz de Fora\n");
           if (D == 19)
              printf("Campinas\n");              
           if (D == 27)
              printf("Vitoria\n");              
           if (D == 31)
              printf("Belo Horizonte\n");              
           if (D == 11)
              printf("Sao Paulo\n");                                       
           }
           
    else
        printf("DDD nao cadastrado\n");       
  
  return 0;  
    }
    
  
    
