#include <bits/stdc++.h>
using namespace std;

void max_swap()
{
    string s={"CODE_BY_SOWHAM_18"};
    long long int x;
    cin >> x;
    string sb;
    cin >> sb;
    long long int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
    for (long long int i = 0; i <sb.length(); i++)
    {
        if (sb[i] == '1' && (i % 2 == 0))
        {
            b1++;
            a3++;
        }
        else if (sb[i] == '0' && i % 2 == 1)
        {
            a1++;
            b3++;
        }
          if (sb[i] == '1' && i % 2 == 1)
        {
            a2++;
            a3++;
        }
        else if (sb[i] == '0' && i % 2 == 0)
        {
            b2++;
            b3++;
        }
        
        }

       long long  int output = 0;
        long long int length = sb.length();
        if (length & 1){
            length--;
        }
        bool x1 = true, x2 = true;
        for (long long int i = 0; i <= length-2; i += 2)
        {
            if (sb[i] == '0' && sb[i + 1] == '1')
            {
            }
            else
            {
            x1 = false;
            }
            if (sb[i] == '1' && sb[i + 1] == '0')
            {
            }
            else
            {
                x2 = false;
            }
        }
        if (x1)
        {
            cout << length / 2 << endl;
            return;
        }
        else if (x2)
        {
            if (sb[length] == '1')
            {
                cout << length / 2 << endl;
                return;
            }
            
        }

        if (a3 == b3)
        {
            output = a3 - 1;
        }
        else if (a3 > b3)
        {
            output = b3;
        }
        else if (a3 < b3)
        {
            output = a3;
        }
        

        cout << output << endl;
        
    }
    int main()
    {
        long long int t;
        cin >> t;
        while (t--)
        {

            max_swap();
        }

        return 0;
    }
