#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	float p=a+b+c;p/=2;
	float s=p*(p-a)*(p-b)*(p-c);
	s=sqrt(s);s*=2;
	float h1=s/a,h2=s/b,h3=s/c;
	printf("%.2f %.2f %.2f",h1,h2,h3);
	
}
