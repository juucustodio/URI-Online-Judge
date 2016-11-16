#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
 
int main ()
{
    int A,B,C,D,AA,CD,AB;
    scanf("%i %i %i %i",&A,&B,&C,&D);
    AA = A %2;
    CD = C+D;
    AB = A+B;
    if ((CD>AB)&&(B>C)&&(D>A)&&(AA==0)&&(C>0)&&(D>0))
      printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");
     
    return 0;
     
    }    