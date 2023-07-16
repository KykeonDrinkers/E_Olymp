#include <stdio.h>
int ah(int n)
{
	int cem=0;
	while(n!=0)
	{
		cem+=n%10;
		n/=10;
	}
	return cem;
}
int main()
{
	int a,b,min=60,s=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		int x=ah(i);
		if(x<min)
		{
			min=x;
			s=0;
		}
		if(min==x)s++;
	}
	printf("%d",s);
}
