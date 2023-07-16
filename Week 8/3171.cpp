#include <stdio.h>
int main()
{
    int a,b,r,x,y;
    scanf("%d%d%d%d%d",&a,&b,&r,&x,&y);
    if((x-a)*(x-a)+(y-b)*(y-b)<=r*r)printf("YES");
    else printf("NO");
}
