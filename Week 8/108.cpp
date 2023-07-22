#include <stdio.h>
using namespace std;
int main()
{
	int a,b,c,min,max,orta;
	scanf("%d%d%d",&a,&b,&c);
	max=a;
	if(b>max)max=b;
	if(c>max)max=c;
	min=a;
	if(b<min)min=b;
	if(c<min)min=c;
	
	orta=a+b+c-min-max;
	printf("%d",orta);
}
