#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0, z = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 0)
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        if (x == n || y == n)
        {
            cout << "0" << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                if (x % 2 == 0 && y % 2 == 0 && x == y)
                {
                    cout << y / 2 << endl;
                }
                else if (x % 2 != 0 && y % 2 != 0 && x == y)
                {
                    cout << x << endl;
                }
                else if (x % 2 == 0 && y % 2 == 0 && x < y)
                {
                    if (y / 2 > x)
                    {
                        cout << x << endl;
                    }
                    else
                    {
                        cout << y / 2 << endl;
                    }
                }
                else if (x % 2 == 0 && y % 2 == 0 && x > y)
                {
                    cout << y / 2 << endl;
                }
                else if (x % 2 != 0 && y % 2 != 0 && x > y)
                {
                    cout << y + (x - y) << endl;
                }
                else if (x % 2 != 0 && y % 2 != 0 && x < y)
                {
                    cout << x << endl;
                }
            }
            else
            {
                if (x > y)
                {
                    if (x % 2 == 0 && y % 2 != 0)
                    {
                        cout << y + (x - y) << endl;
                    }
                    else if (x % 2 != 0 && y % 2 == 0)
                    {
                        cout << y / 2 << endl;
                    }
                }
                else if (x < y)
                {
                    if (x % 2 == 0 && y % 2 != 0)
                    {
                        cout << x << endl;
                    }
                    else if (x % 2 != 0 && y % 2 == 0)
                    {
                        if (y / 2 > x)
                        {
                            cout << x << endl;
                        }
                        else
                        {
                            cout << y / 2 << endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}