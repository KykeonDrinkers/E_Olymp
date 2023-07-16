#include <stdio.h>
double max(double x,double y)
{
    return (x>y ? x : y);
}
double mini(double x,double y,double z)
{
    double min=x;
    if(y<min)min=y;
    if(z<min)min=z;
    return min;
}
int main()
{
    double a,b,c,min;
    scanf("%lf%lf%lf",&a,&b,&c);
    min=mini(max(a,b),max(b,c),a+b+c);
    printf("%.2lf",min);
}
