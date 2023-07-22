#include <iostream>
using namespace std; 
int main()
{
    string a,b,c;
    bool x=true,y=true;
    cin>>a>>b>>c;
    if(a[0]!=b[0])x=false;
    else
    {
        for(int i=0;i<b.length();i++)
        {
            if(a[i]!=b[i])
            {
                x=false;
                break;
            }
        }
    }
    if(a[a.length()-1]!=c[c.length()-1])y=false;
    else
    {
        int k=a.length()-c.length();
        for(int i=c.length()-1;i>=0;i--)
        {
            if(a[i+k]!=c[i])
            {
                y=false;
                break;
            }
        }
    }
    cout<<(x==1 ? "true" : "false")<<"\n"<<(y==1 ? "true" : "false");
}
