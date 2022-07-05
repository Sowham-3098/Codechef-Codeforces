#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /*long long  int n,s=0;
         cin >> n;
        long long  int x[n];
         for(long long int i=1;i<=n;i++){
             x[i]=i;
         }

         for (long long int i =1;i<=n;i++)
         {
             for(long long int j=1;j<=n;j++){
                 if(2*x[i]==x[j]){
                   s++;
                 }
             }

         }
         cout << n-s << endl;*/
        long long int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << (n + 1) / 2 << endl;
        }
    }
    return 0;
}