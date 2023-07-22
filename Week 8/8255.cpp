#include <stdio.h>
#include <math.h>
int main()
{
   int s,n,m,j;
   scanf("%d%d",&n,&s);
   for(int i=pow(10,n-1);i<pow(10,n);i++)
   {
       j=i;m=0;
       while(j!=0)
       {
           m+=j%10;
           j/=10;
       }
       if(m==s)printf("%d\n",i);
   }
    
    
}
