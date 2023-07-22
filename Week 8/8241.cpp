#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double f(double x,double y)
{
	return pow(x,2) + sin(x * y) - pow(y,2);
}
int main()
{ 
  double x,y;
  while(cin>>x>>y)
  {
  	cout<<fixed<<setprecision(4)<<f(x,y)<<endl;
  }
  system("PAUSE");
  return 0;
}
