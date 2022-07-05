#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
        }
        int s;
        for (int i = 0; i < n; ++i)
        {
            if (n <= 2)
            {
                printf("-1");
                break;
            }
            else if (n > 2 && arr[i] % 2 == arr[i + 1] % 2 == arr[i + 2] % 2 ||arr[i] % 2 == arr[i + 1] % 2 != arr[i + 2] % 2)
            {
                s+=1;
                 printf("%d\n", s);
                printf("%d %d\n", i+1, i + 3);
               
               
                
            }
                        else
            {
                continue;
            }
        }
    }
    return 0;
}