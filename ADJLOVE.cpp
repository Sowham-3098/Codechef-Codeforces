#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t >> n;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
                odd_count++;
        }
        if (odd_count % 2 != 0)
            printf("-1\n");
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                    printf("%d ", arr[i]);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                    printf("%d ", arr[i]);
            }
            printf("\n");
        }
    }
    return 0;
}