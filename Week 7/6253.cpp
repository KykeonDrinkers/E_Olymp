#include <iostream>
#include <cstring>
using namespace std;
int main() 
{ 
    char b[100001], a[100001];
    cin >> b >> a; 
    
    int s = 0, l1 = strlen(b), l2 = strlen(a), e1 = l1, e2 = l2; 
    
    for (; b[s] && b[s] == a[s]; ++s); 
    for (; e1>=0 && e2>=0 && b[e1]==a[e2]; --e1, --e2); 
    
    cout << max(max(0,l2-l1),e2-s+1) << endl; 
}
