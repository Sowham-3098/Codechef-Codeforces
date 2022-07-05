#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int str[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        long long int cnt = 0;
        long long int var[n];
        for (long long int i = 0; i < n - 1; i++)
        {
            var[i] = str[i + 1] - str[i];
        }

       
        long long int k = 0, h = 0, y = 0;
        for (long long int i = 0; i < n - 1; i++)
        {
            if (var[i] == 2)
            {
                k++;
            }
            else if (var[i] == 1)
            {
                h++;
            }
            else if (var[i] == 3)
            {
                y++;
            }
            else
            {
                cnt++;
            }
        }

        if (n == 1)
        {
            cout << "YES" << endl;
        }
        else if (n == 2)
        {
            if (str[1] - str[0] > 3)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }

        else
        {
            // if (cnt == 1 && (n - 1) - cnt == h)
            // {
            //     cout << "YES" << endl;
            // }
            // else if (k == 1 && (n - 1) - k == h)
            // {
            //     cout << "YES" << endl;
            // }
            // else
            // {
            //     cout << "NO" << endl;
            // }
            if (cnt > 0)
            {
                cout << "NO" << endl;
            }
            else if (y == 1)
            {
                if (k > 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else if (k == 2 || k == 1)
            {
                if (y > 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
            else if (h == n - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}