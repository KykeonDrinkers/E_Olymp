#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],min,max;
	scanf("%d",&a[0]);
	max=a[0];
	min=a[0];
	for(int i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i])min=a[i];
		if(max<a[i])max=a[i];
	}
	int x=min+max;
	printf("%d",x);
}
