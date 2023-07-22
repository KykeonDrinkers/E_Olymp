#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	long long x,m=1,i=1;
	scanf("%lld",&x);
	for(i=1;i<=x;i++)
	{
		m*=i;
	}
	printf("%lld ",m);
    return 0;
}
