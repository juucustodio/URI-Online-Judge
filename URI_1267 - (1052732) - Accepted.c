#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
int main () {
    int matriz[150][600],lin,col,n,d,a,b;
     
    while(scanf("%d %d",&n,&d) && (n != 0 || d != 0)){
        a = b = 0;
        for(lin  = 0;lin < n;lin++){
            for(col= 0;col < d;col++){
                scanf("%d ",&matriz[lin][col]);
                if(matriz[lin][col]== 1)
                    a += 1;
                else   
                    a = 0;
            }
            if(a == d)
                b = 1;
	    a = 0;
        }
        if(b == 1)
            printf("yes\n");
        else   
            printf("no\n");
    } 
return 0;
}