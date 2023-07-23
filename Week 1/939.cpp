#include <stdio.h>
int main ()
{
	long long ab,a,b;
	scanf("%lld",&ab);
	a=ab/10;
	b=ab%10;
	printf("%lld",(a+b)*(a+b));
}
