#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
// 612
 
int main()
{
	bool res = false;
	size_t count = 0;
	string a, b;
	cin >> a >> b;
 
	if (a.size() == b.size())
	{
		for (size_t i = 0; i < a.size(); i++)
		{
			if (a[i] != b[i])
			{
				if ((i < a.size() - 1) && a[i] != a[i + 1] && a[i + 1] != b[i + 1])
				{
					i++;
					count++;
					if (count > 1) break;
				}
				else
				{
					cout << "NO\n";
					return 0;
				}
			}
		}
	}
 
	cout << (count > 1 ? "NO\n" : "YES\n");
}
