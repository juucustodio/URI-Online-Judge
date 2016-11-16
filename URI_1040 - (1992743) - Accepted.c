#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   float N1,N2,N3,N4,media,Nexame;
   
   scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
   media = ((N1*0.2)+(N2*0.3)+(N3*0.4)+(N4*0.1));
   printf("Media: %.1f\n",media);
   if (media >=5.0 && media < 7)
   {
       printf("Aluno em exame.\n");
       scanf("%f",&Nexame);
       media = (media+Nexame)/2;
       printf("Nota do exame: %.1f\n",Nexame);
       if (media>=5.0)
       {
           printf("Aluno aprovado.\nMedia final: %.1f\n",media);           
                      } 
       else
           printf("Aluno reprovado\n");                
   }
    else if (media >=7.0)
           printf("Aluno aprovado.\n");   
              
    if (media <5.0)
           printf("Aluno reprovado.\n");              
                        
   	
 return 0;
    
    }
