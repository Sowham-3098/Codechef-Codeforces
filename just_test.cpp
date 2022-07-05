#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int g, p, n;
        cin >> g >> p >> n;
        int even = 0, odd = 0;
        int arr[2 * n];
        for (int i = 1; i <= 2 * n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0 && arr[i] == 1)
            {
                even++;
            }
            else if (i % 2 != 0 && arr[i] == 1)
            {
                odd++;
            }
        }
        int x1 = g * even + p * odd;
        int x2 = g * odd + p * even;

        if (x1 > x2)
        {
            cout << x2 << endl;
        }
        else
        {
            cout << x1 << endl;
        }
    }

    return 0;
} // Reading input from STDIN
