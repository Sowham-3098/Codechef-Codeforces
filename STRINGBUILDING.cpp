#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int cnt = 0, cnt1 = 0, k = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'a')
            {
                if (cnt1!=1 )
                {
                    cnt1 = 0;
                }
                else
                {
                    k++;
                }
                cnt++;
            }
            else if (str[i] == 'b')
            {
                if (cnt !=1)
                {
                    cnt = 0;
                }
                else
                {
                    k++;
                }
                cnt1++;
            }
        }
        if (str.size() % 2 != 0)
        {
            if (cnt1 == 1 || cnt == 1)
            {
                cout << "NO" << endl;
            }
            else if (k > 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (cnt1 == 1 || cnt == 1)
            {
                cout << "NO" << endl;
            }

            else if (k > 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}