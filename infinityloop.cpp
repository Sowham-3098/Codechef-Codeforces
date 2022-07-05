#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
   for (int i = 1; i <=t; i++)
    {
        long long int x, a, b;
        cin >> x >> a >> b;
        long double g = 3.141592653589793238;

        long long int radi = x;
        long double sum = g * (radi * radi);
        for(int i = 0; i >=0; i++)
        {
            if (i % 2 == 0)
            {
                radi *= a;
                 if (radi == 0)
                {
                    break;
                }
                sum += g * (radi * radi);
               
            }
            else
            {
                radi /= b;
                if (radi == 0)
                {
                    break;
                }
                sum += g * (radi * radi);
               
            }
        }
    
    
    cout <<"Case #"<< i <<": "<<fixed<< setprecision(6)<< sum << endl;
}
return 0;
}