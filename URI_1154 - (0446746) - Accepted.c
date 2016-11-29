#include <stdio.h>
#include <stdlib.h>

int main (){
    int I;
    float T,X,media;
    
    I = 0;
    X = 0.0;
    T = 0.0;
    while (I>= 0){
    scanf("%i",&I);
    if (I>=0){
    X = X+1.0;
    T = T+I;
    }     
          }
    
    media = T/X;
    printf("%.2f\n",media);      
    
        
 system ("PAUSE");
 return 0;
 
}
