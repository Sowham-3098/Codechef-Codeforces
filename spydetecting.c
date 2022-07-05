#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] != ar[i + 1])
            {
                if (i = 0)
                {
                    if (ar[i] == ar[i + 2])
                    {
                        printf("%d", i + 2);
                        break;
                    }
                    else
                    {
                        printf("%d", i + 1);
                        break;
                    }
                }
                else
                {
                    if (ar[i - 1] == ar[i])
                    {
                        printf("%d", i + 2);
                        break;
                    }
                    else
                    {
                        printf("%d", i + 1 );
                        break;
                    }
                }
            }
        }
    }
    return 0;
}