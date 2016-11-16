#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int km;
 float gasto;
 scanf("%i %f",&km,&gasto);
 printf("%.3f km/l\n",km/gasto);
 return 0;
}
