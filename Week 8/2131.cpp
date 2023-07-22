#include <stdio.h>
#include <math.h>
int main()
{
	int x1,x2,y1,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	double a=sqrt(pow(x2-x1,2)+pow(y1-y2,2));
	printf("%.6lf",a);
	
}
