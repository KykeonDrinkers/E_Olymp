#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cem=s[0]-48;
	
	for(int i=1;i<s.length();i+=2)
	{
		if(s[i]=='+')
		{
			cem+=(s[i+1]-48);
		}
		else if(s[i]=='*')
		{
			cem*=(s[i+1]-48);
		}
	}
	cout<<cem;
}
