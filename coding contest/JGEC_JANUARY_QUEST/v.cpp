#include <stdio.h>


int main()
{


    int t;
    scanf("%d", &t);
    while (t-- )
    {
        int a, b, n, i, sum;
        scanf("%d ", &a);
        scanf("%d", &b);
        scanf("%d", &n);

        sum = n * (n + 1) / 2;
        if (a <= b)
        {
            if (sum <= a)
            {
                printf("%d\n", a + b - sum - sum);
            }
            else
            {
                printf("%d\n", a + b - 2 * a);
            }
        }
        else if (b <= a)

        {
            if (sum <= b)
            {
                printf("%d\n", a + b - sum - sum);
            }
            else
            {
                printf("%d\n", a + b - 2 * b);
            }
        }
    }

    return 0;
}