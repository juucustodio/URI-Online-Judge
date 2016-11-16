#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int A,B,C,P,S,T;
	
	scanf("%d %d %d",&A,&B,&C);
	
	if (A<B && A<C)
		P = A;
	if (B<A && B<C)
		P = B;
	if (C<B && C<A)
		P = C;	
		
	if (P == A){	
	if (B<C && B>A)
		S = B;
	if (C<B && C>A)
		S = C;
	}		
		if (P == B){	
			if (A<C && A>B)
			S = A;
			if (C<A && C>B)
			S = C;
	}		
		if (P == C){	
			if (A<B && A>C)
			S = A;
			if (B<A && B>C)
			S = B;
	}
		
	if (P == A && S == B)
		T = C;
	if (P == A && S == C)
		T = B;
	if (P == B && S ==A)
		T = C;
	if (P == B && S == C)
		T = A;		
	if (P == C && S == A)
		T = B;
	if (P == C && S == B)
		T = A;

			printf("%i\n%i\n%i\n",P,S,T);
			printf("\n");
			printf("%i\n%i\n%i\n",A,B,C);			

	return 0;
}
