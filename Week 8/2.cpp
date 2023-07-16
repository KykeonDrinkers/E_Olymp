#include <iostream>
using namespace std;
int main(){
	long long n,s=1;
	cin>>n;
    while(n>=10)
    {
    	n/=10;
    	s++;
	}
	cout<<s;
	
	return 0;
}
