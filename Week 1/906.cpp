#include <stdio.h>
int main ()
{
long long  abc,a,b,c;
	
	scanf("%lld",&abc);
	a=abc/100;
	b=abc/10%10;;
	c=abc%10;
	printf("%lld",a*b*c);
	return 0;
	
}
