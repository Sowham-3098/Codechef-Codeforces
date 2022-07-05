#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
    int ChaliyeJao;
    cin >> ChaliyeJao;
    while (ChaliyeJao--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x = 0;

        if (k == 1)
        {
            cout << (n - 1) / 2 << endl;
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] > (arr[i - 1] + arr[i + 1]))
                {
                    x++;
                }
            }
            cout << x << endl;
        }
    }

    return 0;
}