#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string main_string[n];

        cin >> main_string[n];

        int x = n;
        for (int i = 1; i < n; ++i)
        {
            if (main_string[i] == main_string[i - 1])
            {
                x--;
            }
        }
        cout << x << endl;
    }
    return 0;
}