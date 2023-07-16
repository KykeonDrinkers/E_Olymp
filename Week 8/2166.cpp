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
    string s,m;
    cin>>s>>m;
    int n=s.length();
    char a[n],b[n];
    for(int i=0;i<n;i++)a[i]=s[i];
    for(int i=0;i<n;i++)b[i]=m[i];
    bubbleSort(a, n);
    bubbleSort(b, n);
    for (int i = 0; i < n; i++) {
        if(a[i]!=b[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
