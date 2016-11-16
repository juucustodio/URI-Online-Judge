#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int velocidade,horas;
 scanf("%i %i",&horas,&velocidade);
 printf("%.3f\n",(horas*velocidade)/12.0);
 return 0;
}
