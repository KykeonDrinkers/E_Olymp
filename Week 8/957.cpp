#include<stdio.h>
#include<cmath>
int main()
{ 
    int a,b,c,d;
    double s;
    scanf("%d",&a);
    b=a/100;
    c=a/10%10;
    d=a%10;
    s=sqrt(d+b+c); 
    printf("%.3lf",s); 
    return 0; 
}
