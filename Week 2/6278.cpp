#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,m;
    cin>>n>>m;

    if((n%2==0 && m%2==0) || (n%2==1 && m%2==1))
    cout<<"1\n";
    else
    cout<<"0\n";


    system("PAUSE");
    return EXIT_SUCCESS;
}
