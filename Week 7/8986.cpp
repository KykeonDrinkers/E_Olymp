#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int a,b;
	getline(cin,s);
	cin>>a>>b;
	for(int i=0;i<s.length();i++)
	{
		if(i>=a && i<=b){
		}
		else cout<<s[i];
	}
	return 0;
}
