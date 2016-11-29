#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	unsigned int numero;
	
	scanf("%d",&numero);

	while(numero > 0){
		if(numero == 1)
			printf("Ho");
		else
			printf("Ho ");
		numero--;
	}
	printf("!\n");
  return 0;
}

