#include<string.h>
#include<math.h>
#include<stdlib.h>
#include <stdio.h>
int main () {

int N,X,Y,D,T;
scanf("%i",&N);

while (N > 0) {
T= 0;
scanf("%i %i",&X,&Y);

    if (X>Y){
    Y = Y +1;         
    while(X>Y){
    D = Y%2;
    if (D!=0){
    T = T+Y;
    }
    Y = Y+1;
    }
    }
    else {
    X=X+1;
    while(X<Y){
    D = X%2;
    if (D!=0){
    T = T+X;
    }
    X = X+1;
    }
    }
    printf("%i\n",T);
    N = N-1;
}
	
    return 0;
    
    }  
