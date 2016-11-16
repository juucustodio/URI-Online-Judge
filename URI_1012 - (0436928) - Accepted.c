#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    float Tra,A,B,C,T,Cir,Q,R;
    scanf("%f %f %f",&A,&B,&C);
    T = (A*C)/2;
    Cir = (3.14159)*(C*C);
    Tra = (C*(A+B))/2;
    Q = (B*B);
    R = (A*B);
    printf("TRIANGULO: %.3f\n",T);
    printf("CIRCULO: %.3f\n",Cir);    
    printf("TRAPEZIO: %.3f\n",Tra);    
    printf("QUADRADO: %.3f\n",Q);     
    printf("RETANGULO: %.3f\n",R);    
    	
  return 0;
}
