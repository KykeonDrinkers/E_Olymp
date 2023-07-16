#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	long long n,m,s=0;
	scanf("%lld",&n);
	if(n<0)n*=-1;m=n;
	while(n!=0)
	{
		n/=10;s++;
	}
	n=m/pow(10,s-1)+m%10;
	printf("%lld",n);
	

   
    return 0;
}
