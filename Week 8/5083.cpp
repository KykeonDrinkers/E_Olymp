#include <stdio.h>
int cem(int n)
{
	int c=0;
	while(n!=0)
	{
		c+=n%10;
		n/=10;
	}
	return c;
}
int main()
{
	int n,min=100,m,j;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		m=cem(a[i]);
		if(m<=min)
		{
			min=m;
			j=i;
		}
	}
	printf("%d",a[j]);
	
	
}
