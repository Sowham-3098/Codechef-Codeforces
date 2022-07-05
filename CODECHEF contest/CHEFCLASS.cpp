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
        long long int x;
        if (n % 7 == 0)
        {
            x = n / 7;
        }
        else if (n % 7 == 6)
        {
            x = (n / 7) + 1;
        }
        else
        {
            x = n / 7;
        }

        cout << x << endl;
    }
    return 0;
}