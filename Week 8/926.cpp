#include <stdio.h>
#include <math.h>
using namespace std;
float heron(float a,float b,float c)
{
	float p=(a+b+c)/2;
	float h=p*(p-a)*(p-b)*(p-c);
	h=sqrt(h);
	return h;
}
int main()
{
	float a,b,c,d,e;
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    float x=heron(a,b,e);
    float y=heron(c,d,e);
	printf("%.4f",x+y);
	
}
