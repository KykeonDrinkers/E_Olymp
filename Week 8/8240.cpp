#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double f(double x)
{
	return sqrt(x) + 2 * x + sin(x);
}
int main()
{ 
  double x;
  while(cin>>x)
  {
  	cout<<fixed<<setprecision(4)<<f(x)<<endl;
  }
  system("PAUSE");
  return 0;
}
