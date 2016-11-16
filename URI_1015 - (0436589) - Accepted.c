#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main (){
    int x1,x2,y1,y2,X,Y;
    float D;
    scanf("%i %i",&x1,&y1);
    scanf("%i %i",&x2,&y2);
    
    X = (x2-x1);
    Y = (y2-y1);
    X = (X*X);
    Y = (Y*Y);
    D = X+Y;
    
    D = sqrt(D);
    
    printf("%.4f\n",D);    

    return 0;
    
    }    
