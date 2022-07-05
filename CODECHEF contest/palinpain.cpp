#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<string> sb1;
        vector<string> sb2;
        if (m % 2 != 0 && n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (m % 2 != 0 && n % 2 == 0)
        {
            if (m == 1)
            {
                cout << "-1" << endl;
            }
            else
            {
                for (int i = 0; i < n / 2; i++)
                {
                    sb1.push_back("b");
                }
                for (int i = 0; i < m; i++)
                {
                    sb1.push_back("a");
                }
                for (int i = 0; i < n / 2; i++)
                {
                    sb1.push_back("b");
                }

                for (int i = 0; i < (m - 1) / 2; i++)
                {
                    sb2.push_back("a");
                }
                for (int i = 0; i < n / 2; i++)
                {
                    sb2.push_back("b");
                }
                sb2.push_back("a");
                for (int i = 0; i < n / 2; i++)
                {
                    sb2.push_back("b");
                }
                for (int i = 0; i < (m - 1) / 2; i++)
                {
                    sb2.push_back("a");
                }
            }
        }
        else if (m % 2 == 0 && n % 2 != 0)
        {
            if (n == 1)
            {
                cout << "-1" << endl;
            }
            else
            {
                for (int i = 0; i < m / 2; i++)
                {
                    sb1.push_back("a");
                }
                for (int i = 0; i < n; i++)
                {
                    sb1.push_back("b");
                }
                for (int i = 0; i < m / 2; i++)
                {
                    sb1.push_back("a");
                }

                for (int i = 0; i < (n - 1) / 2; i++)
                {
                    sb2.push_back("b");
                }
                for (int i = 0; i < m / 2; i++)
                {
                    sb2.push_back("a");
                }
                sb2.push_back("b");
                for (int i = 0; i < m / 2; i++)
                {
                    sb2.push_back("a");
                }
                for (int i = 0; i < (n - 1) / 2; i++)
                {
                    sb2.push_back("b");
                }
            }
        }
        else if (m % 2 == 0 && n % 2 == 0)
        {
            for (int i = 0; i < m / 2; i++)
            {
                sb1.push_back("a");
            }
            for (int i = 0; i < n; i++)
            {
                sb1.push_back("b");
            }
            for (int i = 0; i < m / 2; i++)
            {
                sb1.push_back("a");
            }
            for (int i = 0; i < n / 2; i++)
            {
                sb2.push_back("b");
            }
            for (int i = 0; i < m; i++)
            {
                sb2.push_back("a");
            }
            for (int i = 0; i < n / 2; i++)
            {
                sb2.push_back("b");
            }
        }

        for (int i = 0; i < sb1.size(); i++)
        {
            cout << sb1[i];
        }
        cout << endl;
        for (int i = 0; i < sb2.size(); i++)
        {
            cout << sb2[i];
        }
        cout << endl;
    }
    return 0;
}