#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve()
{
    int numb, odd = 0, even = 0;
    cin >> numb;
    numb = numb * 2;
    vector<int> brocode(numb, 0);
    for (int i = 0; i < numb; i++)
    {
        cin >> brocode[i];
        if (brocode[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    if (odd > even)
    {
        int output = odd - numb / 2;
        cout << output << endl;
    }
    else
    {
        vector<int> googlr;
        for (int i = 0; i < numb; i++)
        {
            int x = brocode[i];
            if (x % 2)
                continue;
            int empty = 0;
            while (x % 2 == 0)
            {
                x /= 2;
                empty++;
            }
            googlr.push_back(empty);
        }
        sort(googlr.begin(), googlr.end());
        int res = 0;
        for (int i = 0; i < even - numb / 2; i++)
            res += googlr[i];
        cout << res << endl;
    }
}
signed main()
{
    int ChaliyeJao;
    cin >> ChaliyeJao;
    while (ChaliyeJao--)
    {
        solve();
    }
    return 0;
}