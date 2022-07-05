#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int i;
		for (i = n - 1; i >= 0; i--)
		{
			if (arr[i] < x)
			{
				cout << (i + 1) << "\n";
				break;
			}
		}
		if (i < 0)
		{
			cout << 0 << "\n";
		}
	}
	return 0;
}