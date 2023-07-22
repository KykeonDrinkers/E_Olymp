#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	
	int a[n],c=0,s=0;
	float cem=0;
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		cem+=a[i];
	}
	cem/=n;
	for(int i=0;i<n;i++)
	{
		if(a[i]>cem)
		{
			c+=a[i];
			s++;
		}
	}
	printf("%d %d",c,s);
	
	
	
	return 0;
}
