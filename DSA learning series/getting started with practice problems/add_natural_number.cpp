#include <iostream>
using namespace std;
int main()
{
    long long int n, t = 0;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        t += i;
    }
    cout << t << endl;
    return 0;
}