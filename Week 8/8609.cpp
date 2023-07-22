#include <stdio.h>
int f(int n)
{ 
if(n==0) 
return 0; 
else return (f(n-1)+n); 
} 
int main(){ 
int a; 
scanf("%d",&a);
 printf("%d",f(a));
}
