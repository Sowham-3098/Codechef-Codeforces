#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    // your code goes here
    int codechef;
    cin >> codechef;
    while (codechef--)
    {
        int n;
        cin >> n;
        int arr[n];
        int zero = 0, non = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zero++;
            }
            else
            {
                non++;
            }
        }
        int x = 0;
        if (non == n)
        {
            cout << "1" << endl;
        }
        else if (zero == n)
        {
            cout << "0" << endl;
        }
        else if (arr[0] == 0)
        {

            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == 0)
                {

                    if (arr[i + 1] != 0)
                    {
                        x++;
                    }
                }
            }

            if (x > 1)
            {
                cout << "2" << endl;
            }
            else
            {
                cout << "1" << endl;
            }
        }
        else
        {

            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] == 0)
                {

                    if (arr[i + 1] != 0)
                    {
                        x++;
                    }
                }
            }

            if (x > 0)
            {
                cout << "2" << endl;
            }else{
                cout << "1" << endl;
            }
            
        }
    }
    return 0;
}