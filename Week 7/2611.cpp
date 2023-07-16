#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{ 
    string a; 
	char b,c; 
	cin >> a >> b >> c; 
	for(int i=0;i<a.length();i++) 
	if(a[i]==b)
    a[i]=c;
			 
	for(int i=0;i<a.length();i++) 
	if(a[0]=='0')
	{
	    a.replace(i,1,"");
		i=0;
	} 
	cout << a;
}
