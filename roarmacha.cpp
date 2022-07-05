#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sowham = 0, x = 0;
    cin >> n;
   long long int bhuin[n];

    for (long long int i = 0; i < n; i++)
    {
        cin >> bhuin[i];
    }

    for (long long int i = 0; i < n - 1; i++)
    {
        if (bhuin[i] < bhuin[i + 1])
        {
            x++;
            if (x > sowham)
            {
                sowham = x;
            }
        }
        else
        {

            x = 0;
        }
    }

    cout << sowham + 1 << endl;

    return 0;
}