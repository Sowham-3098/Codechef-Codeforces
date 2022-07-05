#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++){
       
            if (ar[i]==6 || ar[i]==7 || ar[i]== 13|| ar[i]==14 || ar[i]==20 || ar[i]==21 || ar[i]==27 || ar[i]==28)
            {
                x+=1;
            }
            
        }
        int a = 8 + n - x;
        cout << a << endl;
    }
    return 0;
}