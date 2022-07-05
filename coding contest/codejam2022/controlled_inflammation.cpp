#include <bits/stdc++.h>
using namespace std;
// int sortRowWise(int m[],int n,int x)
// {
//     // One by one sort
//     // individual rows.
//     for (int i = 0; i < n; i++)
//         sort(m[i], m[i] + x);

//     // Printing the sorted matrix

// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int s = 0;
        int res = 0;
        int sum = 0;
        int arr[x];
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < x; j++)
            {

                cin >> arr[j];
            }
            sort(arr, arr + x);
            for (int k = 0; k < x; k++)
            {
                if (k == 0 && i > 0)
                {
                    res = arr[x - 1];
                }
                s += abs(res - arr[k]);
                res = s;
            }
        }
        cout << s << endl;
    }
    return 0;
}