#include <stdio.h>

int main()
{
    int ready = 0, nready = 0;
    int t;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d",&n);

        if (n % 2 == 0)
        {
            ready += 1;
        }
        else
        {
            nready += 1;
        }
    }
    if (ready > nready)
    {
       printf("READY FOR BATTLE");
    }
    else
    {
        printf("NOT READY");
    }

    return 0;
}