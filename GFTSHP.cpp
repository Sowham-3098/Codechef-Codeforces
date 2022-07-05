#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + a);
        int total = 0, x = 0, y = -1;
        for (int i = 0; i < a; i++)
        {
            if (total + arr[i] >= b)
            {
                y = i;
                break;
            }
            total += arr[i];
            x++;
        }
        if (y == -1)
        {
            cout << a << endl;
        }
        else
        {
            if (arr[y] % 2 == 0)
            {
                if ((arr[y] / 2 + total) <= b)
                {
                    x++;
                }
            }
            else
            {
                if ((arr[y] / 2 + total + 1) <= b)
                {
                    x++;
                }
            }
            cout << x << endl;
        }
    }
    return 0;
}