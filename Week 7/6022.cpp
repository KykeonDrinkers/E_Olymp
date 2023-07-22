#include <iostream>
using namespace std; 
bool ab(string s)
{ 
    for(int i=1;i<s.length();i++)
    { 
        if(s[i-1]=='C' and s[i]=='D') return false; 
    } 
    return true; 
} 

int main() 
{ 
    int a, count=0; 
    cin >> a; 
    while(a>0)
    { 
        string s; 
        cin >> s; 
        if(ab(s)) count++; 
        a--; 
    } 
    cout << count; 
}
