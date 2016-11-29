#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int cont;
	float S,A;
	S=1;
	A = 2;
	for (cont=3;cont<=39;cont=cont+2)
	{
		
			S = S+(cont/A);
			A = A*2;

	}
		printf("%.2f\n",S);	



	return 0;
}