#include <stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	float a[n],min=9999999999;
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
		if(min>a[i])min=a[i];
	}
	printf("%.2f",min*2);
}
