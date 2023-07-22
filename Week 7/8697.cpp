#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.length()%2!=0)
	{
		cout<<"no";return 0;
	}
	for(int i=0;i<s.length()/2;i++)
	{
		if(s[i]!=s[s.length()/2+i])
		{
			cout<<"no";return 0;
		}
	}
	cout<<"yes";
}
