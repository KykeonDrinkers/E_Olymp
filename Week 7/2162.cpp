#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int j=s.length()-1;
	for(int i=0;i<s.length()/2;i++)
	{
		while(s[i]==' ')
		{
			i++;
		}
		while(s[j]==' ')
		{
			j--;
		}

		if(s[i]!=s[j])
		{
			cout<<"NO";
			return 0;
		}
		j--;
	}
	cout<<"YES";
	return 0;
}
