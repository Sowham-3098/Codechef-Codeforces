#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed powerOfTwo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    while (n != 1)
    {
        n = n / 2;
        if (n % 2 != 0 && n != 1)
        {
            return 0;
        }
    }
    return 1;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m, x = 0;
        cin >> a >> b >> m;
        if (a == b)
        {
            cout << "0" << endl;
        }
        else
        {
            int f = a ^ b;
            if (f < m)
            {

                cout << "1" << endl;
            }
            else
            {
                if (log(a) == log(m))
                {
                    if (m & (m - 1))
                    {
                        cout << "2" << endl;
                    }
                    else
                    {
                        cout << "-1" << endl;
                    }
                }
                else
                {
                    cout << "-1" << endl;
                }
            }
        }
    }

return 0;
}