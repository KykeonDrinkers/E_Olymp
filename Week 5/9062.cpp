#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int kra = 0;

    int i = 0;
    while ((kra + arr[i]) <= k) {
        kra += arr[i];
        ++i;
    }

    cout << kra << "\n";
}
