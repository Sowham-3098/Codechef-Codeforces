
#include <bits\stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long int t;
    scanf("%ld",&t);
    while (t--)
    {
       long long  int P;
       scanf("%lld",&P);
        long long int ar[P];

        for (int i = 0; i < P; i++)
        {

            scanf("%lls",&ar[P]);
        }

        long int count = 0;
        for (long int i = 0; i < P; i++)
        {
            for (long int j = P - 1; j >= i; j--)
            {
                if ((ar[i] & ar[j]) == 0)
                {
                    continue;
                }
                else if (ar[i] > ar[j])
                {
                    int x;
                    x = ar[i];
                    ar[i] = ar[j];
                    ar[j] = x;
                   
                }
                else
                {
                    continue;
                }
            }
        }
        for (long int j = 0; j <= P - 2; j++)

        {
            if (ar[j] <= ar[j + 1])
            {
                count++;
            }
        }
        if (count == P - 1)
            printf ("yes \n"); 
        else
            printf ( "no \n") ;
    }

    return 0;
}