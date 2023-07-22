#include <iostream>
#include <string>
using namespace std;
int main()
{
	char c;
	int i=500;
	long long a[1001]={0};
	a[i]=1;
	while(cin>>c)
	{
		if(c=='L')
		{
			a[--i]=1;
		}
		if(c=='R')
		{
			a[++i]=1;
		}
	}
	int cem=0;
	for(int j=0;j<1001;j++)
	{
		cem+=a[j];
	}
	cout<<cem;
	
}
