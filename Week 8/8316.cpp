#include <iostream>
using namespace std;

void bubbleSort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    string s;
    cin>>s;
    int n=s.length();
    char a[n];
    for(int i=0;i<n;i++)a[i]=s[i];
    
    bubbleSort(a, n);
    
    for (int i = 0; i < n; i++) {
        cout << a[i] ;
    }cout<<"\n";
    for (int i = n-1; i >= 0; i--) {
        cout << a[i] ;
    }
    cout << endl;
    return 0;
}
