#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float A,B,C,ab,ac,bc,Per,Area;
    scanf("%f %f %f",&A,&B,&C);
    ab=A+B;
    ac=A+C;
    bc=B+C;
    if(ab>C && ac>B && bc>A){
        Per=A+B+C;
        printf("Perimetro = %.1f\n",Per);
    }
    else
    {
        Area=(C*(A+B))/2;
        printf("Area = %.1f\n",Area);}
     
         
    return 0;
}