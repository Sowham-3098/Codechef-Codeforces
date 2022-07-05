#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t-- > 0)
    {
        int p;
        int x;
        scanf("%d", &p);

        if (p % 2 == 0)
        {
                printf("%d",x=p/2+1);
        }
        else
        {
            printf("%d", x = (p + 1) / 2);
        }
    }

    return 0;
}