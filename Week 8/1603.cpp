#include <stdio.h>
using namespace std;
int main()
{
    long long n,m=0;
    scanf("%lld",&n);
    if(n<0)n*=-1;
    while(n!=0)
	{
		m=m+n%10;
		n/=10;
	} 
	printf("%lld",m);
    return 0;
}
