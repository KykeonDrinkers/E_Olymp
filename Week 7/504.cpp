#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,m,k=0,b[101];
	string s;
	cin>>n;
	
	for(int q=0;q<n;q++)
	{
		cin>>s;
    	m=s.length();
    	int a[m];
    	
    	for(int i=0;i<m;i++)
		{
			a[i]=1;
		}
    	
    	for(int i=0;i<m;i++)
    	{
    		if(s[i]=='B')
    		{
    			a[i]=0;
    			if(i-1>=0)a[i-1]=0;
    			if(i-2>=0)a[i-2]=0;
			}
			
		    if(s[i]=='D')
			{
				a[i]=0;
			}
			
			if(s[i]=='S')
			{
				a[i]=0;
				if(i+1<m)a[i+1]=0;
				if(i-1>=0)a[i-1]=0;
		    }
		}
		
		int cem=0;
		for(int i=0;i<m;i++)
		{
			cem+=a[i];
		}
		b[k++]=cem;
	}
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<endl;
	}
}
