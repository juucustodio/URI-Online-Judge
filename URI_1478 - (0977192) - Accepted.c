#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
	int n,x,matriz[150][150],lin,col;

	scanf("%d",&n);	
	while(n!= 0){
	x = 1;
	for(lin = 0;lin<n;lin++){
		matriz[lin][0] = x;
		matriz[0][lin] = x;
		x++;
	}

	for(lin = 1;lin<=n;lin++)
		for(col = 1;col<=n;col++){			
			matriz[lin][col] = matriz[lin-1][col-1];
			
				
		}
        for(lin=1;lin<=n;lin++){
            for(col=1;col<=n;col++){
                if(col==n){
                    printf("%3d", matriz[lin][col]);
                    printf("\n");
                 
                }else
                    printf("%3d ", matriz[lin][col]);
            }
        }



	printf("\n");
	scanf("%d",&n);
	}

return 0;
}