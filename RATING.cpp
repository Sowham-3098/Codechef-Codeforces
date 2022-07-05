/*CODE BY SOWHAM_18*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int codechef, codeforces;
        cin >> codechef;

        if (codechef == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            codeforces = codechef + 1;
            cout << (codeforces * -1)<< endl;
        }
    }
    return 0;
}