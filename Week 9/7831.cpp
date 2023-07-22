#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n],max,cem=0;
	
	scanf("%d",&a[0]);
	max=a[0];
	for(int i=1;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])max=a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]!=max)
		{
			cem=cem+a[i];
		}
	}
	printf("%d  ",cem);
	
	
	
	return 0;
}
