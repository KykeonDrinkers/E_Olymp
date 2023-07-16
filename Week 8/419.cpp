#include <stdio.h>
#include <string.h>

int f(int n)
{
	int c=1;
	while(n!=1)
	{
		if(n%2==0)n/=2;
		else n=3*n+1;
		c++;
	}
	return c;
}

int maks(int a, int b){return a>b ? a : b;}

int main() {
	int a,b,i,j;
	while(scanf("%d%d",&a,&b)==2)
	{   
		int x=a,y=b;
		if(a>b){int c=a;a=b;b=c;}
		int res=0;
		for(i=a;i<=b;i++)
		{
			res = maks(res,f(i));
		}
		printf("%d %d %d\n",x,y,res);
	}
	return 0;
}
