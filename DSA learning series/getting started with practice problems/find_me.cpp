#include <iostream>
using namespace std;
int main()
{
    int n, s, a = 0;
    cin >> n >> s;
    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (x[j] == s)
        {
            a++;
        }
        else
        {
            continue;
        }
    }
    if (a > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}