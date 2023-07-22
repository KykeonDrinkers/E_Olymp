#include <stdio.h>
using namespace std;
int main()
{
	int n,min1,min2;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&a[0]);
	min1=a[0];
	for(int i=1;i<n;i++)
	{
	    scanf("%d",&a[i]);
	    if(min1>a[i])min1=a[i];
	}
	if(a[0]!=min1)min2=a[0];
	else if(a[1]!=min1)min2=a[1];
	else min2=a[2];
	for(int i=0;i<n;i++)
	{
		if(a[i]==min1)continue;
		if(a[i]<min2)min2=a[i];
	}
	
	printf("%d %d",min1,min2);
	
	return 0;
}
