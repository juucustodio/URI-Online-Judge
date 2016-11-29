#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int X;
	float Y;
	Y =1;
	for (X=2;X<=100;X++)
	{
		Y = Y+(1.0/X);
	}
	printf("%.2f\n",Y);

return 0;
}