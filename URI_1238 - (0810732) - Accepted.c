#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int n,a,b,cont,x,ca,cb;
	char vetora[52], vetorb[52];

	scanf("%d",&n);
	
	while (n > 0) {

			
			scanf("%s",vetora);
			scanf("%s",vetorb);
			
			a = strlen(vetora);
			b = strlen(vetorb);
	
		if (a <= b)
			x = b;
		if (b < a)
			x = a;
		
		ca = 0;
		cb = 0;
		for (cont = x;cont>0;cont--){
			if (a>0){
				printf("%c",vetora[ca]);
				ca++;
				a--;
			
			}
			if (b>0){
				printf("%c",vetorb[cb]);
				cb++;
				b--;
			}		
		
		}
		printf("\n");

	n = n-1;
	}
	

return 0;


}