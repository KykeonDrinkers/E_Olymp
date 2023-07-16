#include <stdio.h>
#include <math.h>
double teref(double a,double b,double c,double d)
{
    double h=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return h;
}
int main()
{
    double a,b,c,d,e,f,x,y,z,p,s;
    scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
    x=teref(a,b,c,d);
    y=teref(c,d,e,f);
    z=teref(e,f,a,b);
    p=(x+y+z)/2;
    s=sqrt(p*(p-x)*(p-y)*(p-z));
    printf("%.4lf %.4lf",x+y+z,s);
    
}
