#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;

        cin >> n >> x;
        int s = x;
        int arr[n], ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            x = x + arr[i];
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    ar[j] == x;
                }
            }
        }

        sort(ar, ar + n);
        if (s < ar[n - 1])
        {
            cout << ar[n - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}