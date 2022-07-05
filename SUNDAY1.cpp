#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int F, b[] = {6, 13, 20, 27, 7, 14, 21, 28}, count = 0;
        cin >> F;
        int a[F];
        for (int i = 0; i < F; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < F; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i] == b[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout<<(8+F)-count<<endl;
    }
    return 0;
}