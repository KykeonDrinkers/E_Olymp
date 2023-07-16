#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int j=0,a[1000]={0};
	cin>>s;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='k')
		{
			a[j]++;
		}
		else if(s[i]!='k')j++;
	}
	
	int max=a[0];
	for(int i=0;i<=j;i++)
	{
		if(max<a[i])max=a[i];
	}
	
	cout<<max;
	
	
}
