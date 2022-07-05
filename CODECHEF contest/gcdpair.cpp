#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int hcf;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int s, b, f = 0, e = 0;
        cin >> s >> b;
        if (s % 2 == 0)
        {
            if (b - s >= 2)
            {
                cout << s << " " << s + 2 << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            if (b - s >= 3)
            {
                if (s % 3 == 0)
                {
                    cout << s << " " << s + 3 << endl;
                }
                else
                {
                    cout << s + 1 << " " << s + 3 << endl;
                }
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}