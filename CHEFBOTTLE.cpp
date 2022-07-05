#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int x, y, z, s = 0;
        cin >> x >> y >> z;

        for (long int i = 1; i <= x; i++)
        {
            if (i * y <= z)
            {
                s++;
            }
        }
        cout << s << endl;
    }
    return 0;
}