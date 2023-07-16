#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int n;
	cin>>s>>n;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]-n>64)s[i]=s[i]-n;
		else 
		{
			s[i]=s[i]-n+26;
		}
	}
	for(int i=0;i<s.length();i++)
	cout<<s[i];
	

}
