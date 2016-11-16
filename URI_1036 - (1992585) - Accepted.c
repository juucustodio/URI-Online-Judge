#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    
    double A,B,C,M,D,X1,X2;
    scanf("%lf %lf %lf",&A,&B,&C);
       D = B*B-((4*A)*C);
    if (D<=0 || A <= 0){
       printf("Impossivel calcular\n");
       }
    else{
 
    X1 = (-B+sqrt(D))/(2*A);
    X2 = (-B-sqrt(D))/(2*A);
    
   printf("R1 = %.5lf\nR2 = %.5lf\n",X1,X2);
}     
 	
    return 0;
    
    }
   
