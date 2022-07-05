#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        char arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + x);
        for (int i = 0; i < x; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }
    return 0;
}