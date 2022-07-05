#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x[n], y[n];
        for (i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }
        sort(x, x + n);
        sort(y, y + n);
        int p = 0, q = 0;
        for (i = 0; i < n; i++)
        {
            while (i < n - 1 && x[i] == x[i + 1])
            {
                i++;
            }
            p++;
        }
        for (i = 0; i < n; i++)
        {
            while (i < n - 1 && y[i] == y[i + 1])
            {
                i++;
            }
            q++;
        }
        cout << p + q << endl;
    }
    // your code goes here
    return 0;
}