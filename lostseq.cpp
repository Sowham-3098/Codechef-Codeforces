#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         long long int n, a= 0, b= 0;
        cin >> n;
        int arr[2 * n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        for (int t = 0; t < 2 * n; t++)
        {
            if (arr[t] < 0)
            {
                if (-arr[t] % 2 == 0)
                    b++;
                else
                    a++;
            }
            else if (arr[t] % 2 == 0)
            {
                b++;
            }
             else if ((arr[t]%2)!=0)
            {
                a++;
            }
        }
        if (b % 2 == 0 && a % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}