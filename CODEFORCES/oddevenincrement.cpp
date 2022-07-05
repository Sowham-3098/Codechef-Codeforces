#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int eveneven = 0, oddeven = 0, oddodd = 0, evenodd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0 && arr[i] % 2 == 0)
            {
                eveneven++;
            }
            else if (i % 2 != 0 && arr[i] % 2 == 0)
            {
                oddeven++;
            }
            else if (i % 2 == 0 && arr[i] % 2 != 0)
            {
                evenodd++;
            }
            else if (i % 2 != 0 && arr[i] % 2 != 0)
            {
                oddodd++;
            }
        }
        if (n % 2 == 0)
        {
            if (eveneven == oddodd || evenodd == oddeven || eveneven == oddeven || oddodd == evenodd)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            if (abs(eveneven - oddodd) == 1 || abs(evenodd - oddeven) == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}