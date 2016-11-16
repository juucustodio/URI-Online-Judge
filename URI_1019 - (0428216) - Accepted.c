#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 int d,h,m,s;
 scanf("%i",&d);
 h=d/3600;
 d=d-(3600*h);
 m=d/60;
 d=d-(60*m);
 s=d;
 printf("%i:%i:%i\n",h,m,s);	
 return 0;
}
