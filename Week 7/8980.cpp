#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int say=0;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='.' || s[i]=='!' || s[i]=='?')
		{
			if(s[i+1]!='.' && s[i+1]!='!' && s[i+1]!='?')
			{
				say++;
			}
		}
	}
	cout<<say;
	

}
