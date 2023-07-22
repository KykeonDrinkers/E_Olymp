#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int say=0;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]=='+' || s[i]=='-' || s[i]=='*')
		{
			say++;
		}
	}
	cout<<say;
}
