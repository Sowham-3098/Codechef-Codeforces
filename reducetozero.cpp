#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isPowerOfTwo(int l)
{
    if (l == 0)
        return false;

    return (ceil(log2(l)) == floor(log2(l)));
}
signed check(int n)
{
    int h = n / 2, g = 0;

    for (int i = 0; i < h; i++)
    {
        n = n / 2;
        if (n == 1)
        {
            return g;
        }
        else
        {
            g++;
        }
    }
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, ans,com=0;
        cin >> x >> y;
        if (x == y)
        {
            cout << x << endl;
        }
        else
        {
            if (x > y)
            {
                   int k = 0;
                for (int i = 2; i >= 2; i += 2)
                {
                    y = y * i;
                    k++;
                    z = y / x;
                    if(z==1){
                        ans=k+y;
                        com=1;
                        break;
                    }else
                    if (isPowerOfTwo(z))
                    {
                        ans = k + check(z) + y;
                        com=1;
                        break;
                    }
                }
            }
            else
            {
                    
                int k = 0;
                for (int i = 2; i >= 2; i += 2)
                {
                    x = x * i;
                    k++;
                    z = x / y;
                    if (z==1)
                    {
                        ans = k+ x;
                        com=1;
                        break;
                    }else if(isPowerOfTwo(z)){
                        ans=k+x+check(z);
                         com=1;
                        break;
                    }
                }
            }
             if(com=1){
                 cout << ans <<  endl;
             }else{
                 cout << "-1" << endl;
             }
        }
       
    }
        return 0;
    }