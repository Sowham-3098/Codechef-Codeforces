#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0 && a + 2 == b || b + 2 == a)
        {
            cout << "Yes" << endl;
        }
        else if (a % 2 != 0 && b % 2 != 0 && a + 2 == b || b + 2 == a)
        {
            cout << "Yes" << endl;
        }
        else if(a%2!=0 && a+1==b){
          cout << " Yes" <<  endl;
        }else if(b%2!=0 && b+1==a){
            cout << "|Yes" << endl;
        }else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}