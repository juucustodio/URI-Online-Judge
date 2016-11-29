#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
	int x;

	while((scanf("%d",&x))!=EOF){
		if (x != 0)
			printf("vai ter duas!\n");
		else
			printf("vai ter copa!\n");
	}

return 0;
}