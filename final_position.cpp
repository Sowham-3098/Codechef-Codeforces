#include <iostream>
using namespace std;
int main()
{
    long int a;
    cin >> a;
    long int s = 0, b = 0;

    for (long int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            b += i;
        }
        else
        {
            s += i;
        }
    }
    cout << s << " " << b << endl;
    return 0;
}