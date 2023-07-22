#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double n,c,a,sum=0,bedroom=0,balcony=0;
    string r;
    cin>>n>>c;
    while(n--)
    {
        cin>>a>>r;
        sum+=a;
        if(r=="bedroom")bedroom+=a;
        if(r=="balcony")balcony+=a;
    }
    double money=(sum-balcony/2)*c;
    cout<<sum<<endl<<bedroom<<endl<<fixed<<setprecision(6)<<money;
    
    
}
