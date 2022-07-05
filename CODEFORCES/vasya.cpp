#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int str[n];
        for (long long int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        sort(str,str+n);
     

        long long int x = 0, y = 0;
        if (n == 1 && str[0] == 1)
        {
            cout << "yes" << endl;
            break;
        }
        else if (n == 1 && str[0] != 1)
        {
            cout << "No" << endl;
            break;
        }
        else
        {
            for (long long int i = 0; i < n - 1; i++)
            {
                if ((str[i+1]-str[i])>=1)
                {
                    x++;
                }
                else
                {
                    y++;
                }
            }
            if (y == 1)
            {
                if (str[n - 1] == 1)
                {
                    cout << "yes" << endl;
                }
            }
            else if (y > 1)
            {
                cout << "no" << endl;
            }
            else if (x + 1 == n)
            {
                cout << "yes" << endl;
            }
        }
    }
    return 0;
}