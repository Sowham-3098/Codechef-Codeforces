#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int soham[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> soham[i];
        }
        sort(soham, soham + n);
        if ((soham[0] + 1) != soham[1])
        {
            cout << soham[0] << endl;
        }
        else if ((soham[n - 2] + 1) != soham[n - 1])
        {
            cout << soham[n - 1] << endl;
        }
        else
        {
            for (long long int i = 0; i < n - 1; i++)
            {
                if (soham[i] == soham[i + 1])
                {
                    cout << soham[i] << endl;
                    break;
                }
                // else if ((soham[i] + 1) != soham[i + 1] && (soham[i + 1] + 1) == soham[i + 2])
                // {
                //     cout << soham[i] << endl;
                //     break;
                // }
            }
        }
    }
    return 0;
}