#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int d,dia,mes,ano;
 scanf("%i",&d);
 ano=d/365;
 d=d-(365*ano);
 mes=d/30;
 d=d-(30*mes);
 dia=d;
 printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n",ano,mes,dia);	
 return 0;
}
