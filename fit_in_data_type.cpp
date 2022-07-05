#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, s, h;
        cin >> a >> b;

        if (b >= 0 && b <= a)
        {
            cout << b << endl;
        }
        else if (b > a)
        {

            cout << b % (a + 1) << endl;
        }
    }

    return 0;
}