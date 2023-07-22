#include <stdio.h>
using namespace std;
int main()
{
 	float x,a,m=0;
	scanf("%f",&x);

	for(int i=0;i<x;i++)
	{
		scanf("%f",&a);
		m+=a;
	}
		printf("%.1f",m);
	
    return 0;
}
