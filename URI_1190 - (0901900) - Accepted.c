#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
    
int main (){
   
    double soma=0,matriz[12][12];
    int col,lin,li;
    char O;
           
       
    scanf("%c",&O);
   
        for (lin = 0; lin < 12; lin++){
            for (col = 0 ; col <12;col++){
                scanf("%lf",&matriz[lin][col]);
            }
        }   
        li = 7;
           
         for (lin = 5; lin>=1;lin--){ 
            for (col = li;col<=11;col++){
 
            soma = soma+ matriz[lin][col];
        }
        li = li+1;
        }
        li = 7;     
         for (lin = 6; lin<=10;lin++){ 
            for (col = li;col<=11;col++){
 
            soma = soma+ matriz[lin][col];
        }
        li = li+1;
        }
          
    if (O == 'S')
        printf("%.1lf\n",soma);
    else{
        soma = soma/66.0;
        printf("%.1lf\n",soma); 
    }   
   
return 0;
}