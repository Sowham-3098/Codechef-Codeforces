#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        int x = 0, y;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++)
        {
            
            if (arr[j] == j+1+x)
            {
                x++;
            }
            else
            {
                continue;
            }
        }
        cout << x << endl;
    }
    return 0;
}