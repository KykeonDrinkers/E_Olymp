#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main()
{
   long long a,s=0,c=0;
   while(cin>>a)
   {
       c+=a;
       s++;
   }
   double x=c;
   printf("%.4lf",x/s);
    
}
