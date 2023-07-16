#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{ 
  int a, b, c, d; 
  char ch; 
  cin >> a >> ch >> b >> c >> ch >> d; 
  double x = b * log(a); 
  double y = d * log(c); 
  if (x > y) { cout << a << "^" << b << endl; } 
  else { cout << c << "^" << d << endl; } 
  return 0; 
}
