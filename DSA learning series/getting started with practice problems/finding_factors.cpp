#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
        else
        {
            continue;
        }
    }
    cout << c << endl;
    for (int j = 1; j <= n; j++)
    {
        if (n % j == 0)
        {
            cout << j << endl;
        }
    }

    return 0;
}