#include <stdio.h>
#include <math.h>
int main()
{
    double i,x,y,a,b,h;
    scanf("%lf%lf%lf",&a,&b,&h);
    for(i=a;i<=b;i+=h)
    {
        y=3*sin(i);
        printf("%.3lf %.3lf\n",i,y);
    }
}
