#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
	int x,i=0,a[100000];
	while(cin>>x)
	{
	    a[i++]=x;
	}
	sort(a,a+i);
	for(int j=0;j<i;j++)cout<<a[j]<<" "; 
	
}
