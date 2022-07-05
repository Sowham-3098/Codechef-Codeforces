/*CODE BY SOWHAM_18*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, x = 0;
        cin >> a >> b >> c >> d;

        if (a != c && a != d)
        {
            x++;
        }
        if (b != c && b != d)
        {
            x++;
        }

        cout << x << endl;
    }
    return 0;
}