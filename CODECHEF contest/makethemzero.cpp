#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> v(200);
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a, j = 0;
            cin >> a;
            while (a != 0)
            {
                if (v[j] == 0)
                {
                    v[j] = a % 2;
                }
                a /= 2;
                j++;
            }
        }

        int ans = 0;

        for (int i = 0; i < 150; i++)
        {
            ans += v[i];
        }
        cout << ans << endl;
    }
    return 0;
}