#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        if (n1 > n2 && n2 > n3 || n3 > n2 && n2 > n1)
        {
            cout << n2 << endl;
        }
        else if (n2 > n3 && n3 > n1 || n1 > n3 && n3 > n2)
        {
            cout << n3 << endl;
        }
        else
        {
            cout << n1 << endl;
        }
    }
    return 0;
}