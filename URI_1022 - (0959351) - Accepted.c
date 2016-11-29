#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef struct { int numerador, denominador; }TRacional;
int mdc (int m, int n){
	if(m<0) m = -m;
	if(n<0) n = -n;
	
	if (m % n == 0)
		return n;
	else
		return mdc(n,m%n);
}

void divRac(TRacional p1, TRacional p2, TRacional *p3) {
	p3 -> numerador = p1.numerador * p2.denominador;
	p3 -> denominador = p2.numerador * p1.denominador;

}
void multRac(TRacional p1, TRacional p2, TRacional *p3) {
	p3 -> numerador = p1.numerador * p2.numerador;
	p3 -> denominador = p1.denominador * p2.denominador;

}
void somaRac(TRacional p1, TRacional p2, TRacional *p3){
	p3 ->numerador = p1.numerador * p2.denominador + p2.numerador * p1.denominador;
	p3->denominador = p1.denominador * p2.denominador;
}

void subRac(TRacional p1, TRacional p2, TRacional *p3){

	p3->numerador = p1.numerador * p2.denominador - p2.numerador * p1.denominador;
	p3->denominador = p1.denominador * p2.denominador;

}

void simplifica(TRacional p1,TRacional *p3) {
	int r;
	r = mdc(p1.numerador,p1.denominador);
	
	p3-> numerador = p1.numerador / r;
	p3->denominador = p1.denominador /r;

}

int main() {
	TRacional valor1, valor2, resultado;
	int c;
	char o;
	
	scanf("%d",&c);
	
	while(c>0) {
	scanf("%d / %d",&valor1.numerador, &valor1.denominador);
	scanf(" %c ",&o);
	scanf("%d / %d",&valor2.numerador, &valor2.denominador);	
	
	if (o == '+'){
		somaRac(valor1,valor2,&resultado);
		printf("%d/%d = ",resultado.numerador,resultado.denominador);
	}
	else if(o == '-') {
		subRac(valor1,valor2,&resultado);
		printf("%d/%d = ",resultado.numerador,resultado.denominador);
	}
	else if (o == '*') {
		multRac(valor1,valor2,&resultado);
		printf("%d/%d = ",resultado.numerador,resultado.denominador);
	
	}
	else if (o == '/') {
		divRac(valor1,valor2,&resultado);
		printf("%d/%d = ",resultado.numerador,resultado.denominador);
	
	}	
		simplifica(resultado,&resultado);
		printf("%d/%d\n",resultado.numerador,resultado.denominador);	
	c = c-1;
	}


return 0;
}