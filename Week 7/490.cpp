#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++)
	{
		if(i==0)
		{
			if(n[0]=='0')cout<<0;
			else cout<<1;
		}
		else if(n[i]==n[i-1])cout<<0;
		else cout<<1;
	}

	
}
