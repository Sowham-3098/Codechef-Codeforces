/*CODE BY SB_DECODER*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, x = 0, y = 0, a = 0, b = 0;
        cin >> n;
        long long int eng[n], d[n];

        for (long long int i = 0; i < n; i++)
        {
            cin >> eng[i];
            d[i] = eng[i];
        }

        sort(eng, eng + n);

        for (long long int i = 0; i < n; i++)
        {
            if (d[i] == eng[0])
            {
                x = i;
            }
            else if (d[i] == eng[n - 1])
            {
                y = i;
            }
        }

        cout << x + 1 << " " << y + 1
             << endl;
    }
    return 0;
}