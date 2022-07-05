#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t-- )
    {
        int a, b, m,sum=0;
        scanf("%d %d %d", &a, &b, &m);
        

        for (int i = 1; i <= m; i++)
        {
            if(i<=a && b!=0)
		a-=i;
		    if(i<=b && a!=0)
		b-=i;
            int sum = a + b;
            printf("%d", sum);
        }
    }
    return 0;
}