#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    int numb, times, target;
     cin >> numb >> times >> target;
     bool justcheck = true;

    int arr[numb];
    vector<int> has(100);
    vector<int> vector;

   
    
    for (int i = 0; i < numb; i++)
    {
        cin >> arr[i];
        if (arr[i] != target)

        {

            vector.push_back(arr[i]);
        }
        has[arr[i]]++;
    }
    if (vector.size() < times || times < target )
    {
        cout << "NO" << endl;
    }
    else
    {

        for (int i = 0; i < target; i++)
        {
            if (has[i] == 0)
            {
                justcheck = false;
            }
        }
        if (justcheck == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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