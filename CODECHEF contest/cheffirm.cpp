#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main()
{
    int test;
    cin >> test;
    while (test--)
    {
        // your code goes here
        int man, down; 
        cin >> man >> down;
        int x = man / 5, y = down / 5;

        if (man == down)
        {
            cout << "0" << endl;
        }
        else if (man <= 5 && down <= 5)
        {
            cout << "0" << endl;
        }
        else
        {

            if (man % 5 == 0)
            {
                x--;
            }
            if (down % 5 == 0)
            {
                y--;
            }

            cout << x - y << endl;
        }
    }
    return 0;
}