#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = x; i <= y; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}