#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char s;
	double m;
	int c[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>m>>s;
		if(m<3.5 || s!=65 || s!=66)c[i]=0;
		
		if(m>=3.5)
		{
			if((int)(s)==65 || (int)(s)==66)
			c[i]=1;
		}
		
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<endl;
	}
	
	
}
