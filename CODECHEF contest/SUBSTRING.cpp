#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
         string jolu;
        cin >> jolu;
        long long int n = jolu.length(), x = 0,y=0;
        for (long long int i = 1; i < n - 1; i++)
        {
            if (jolu[i] != jolu[0] && jolu[i] != jolu[n - 1])
            {
                x++;
            }else{
                x=0;
            }
            y=max(x,y);
        }
        if (y == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}