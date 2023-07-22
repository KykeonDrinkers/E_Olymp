#include <stdio.h>
#include <math.h>
int main()
{
   double x,y,k,c,a;
   scanf("%lf%lf",&x,&k);
   y=pow(((log(pow(x,2)+pow(k,3)))/(log(10))),3)+pow(cos(x),5);
   printf("%.2lf",y);
    
}
