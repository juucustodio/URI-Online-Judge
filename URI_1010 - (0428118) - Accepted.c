#include <stdio.h>
#include <stdlib.h>

int main()
{
 int cod,qtd,cont;
 float valor,total;
 valor = 0.00;
 for (cont = 0;cont<2;cont=cont+1)
 {
 scanf("%i %i %f",&cod,&qtd,&total);
 valor = (qtd*total)+valor;   
 }
 printf("VALOR A PAGAR: R$ %.2f\n",valor);
 return 0;
}
