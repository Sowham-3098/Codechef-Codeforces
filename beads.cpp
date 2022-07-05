#include <iostream>
using namespace std;
int main()
{
    long long int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a + b << endl;
    }
    else if (a > b)
    {
        cout << (b * 2) + 1 << endl;
    }
    else
    {
        cout << (a * 2) + 1 << endl;
    }
    return 0;
}