#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        int kgf[num], maximum = 0;
        map<int, int> pushpa;

        for (int i = 0; i < num; i++)
        {
            cin >> kgf[i];
            maximum = max(maximum, kgf[i]);
            pushpa[kgf[i]]++;
        }
        if (num == 1)
        {
            cout << kgf[0] << endl;
        }
        else
        {
            for (int i = 0; i < num; i++)
            {
                maximum = max(maximum, kgf[i] + pushpa[kgf[i]] - 1);
            }
            cout << maximum << endl;
        }
    }
    return 0;
}