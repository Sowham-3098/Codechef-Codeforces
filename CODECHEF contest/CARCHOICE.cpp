#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        float e, f;
        e = (float)c / a;
        f = (float)d / b;

        if (e == f)
        {
            cout << "0" << endl;
        }
        else if (e < f)
        {
            cout << "-1" << endl;
        }
        else if (f < e)
        {
            cout << "1" << endl;
        }
    }
    return 0;
}