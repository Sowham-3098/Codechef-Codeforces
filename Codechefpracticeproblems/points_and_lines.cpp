#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n, x = 0, y = 0;
        cin >> n;

        int arr[n][2];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int u = i+1; u < n; u++)
            {
                if (arr[i][0]==arr[u][0] )
                {
                    x++;
                    break;
                }
                
               
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int u = i+1; u < n; u++)
            {
                if (arr[0][i]==arr[0][u] )
                {
                    y++;
                    break;
                }
                
               
            }
        }

       
        int l=x;
        int k=y;
        cout << l << endl;
        cout << k << endl;
        cout << l+k << endl;
    }
    return 0;
}