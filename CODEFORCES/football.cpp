#include <bits/stdc++.h>
using namespace std;
int main()
{
    
        string s;
        cin >> s;
        int n = s.length();
        int zero = 0, one = 0, danger = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                zero = 0;
                one++;
                if (one >= 7)
                {
                    danger++;
                    break;
                }
            }
            else if (s[i] == '0')
            {
                one = 0;
                zero++;
                if (zero >= 7)
                {
                    danger++;
                    break;
                }
            }
        }
        if (danger > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
   
    return 0;
}