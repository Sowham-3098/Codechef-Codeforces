#include <iostream>
using namespace std;
int main()
{
    int r = 8;

    for (int i = r; i > 1; i--)
    {
        cout << "*";
        for (int j = 1; j <= i - 2; j++)
        {
            cout << "  ";
        }
        cout << "*";
        cout << endl;
    }
     for (int i = 3; i <= r; i++)
    {
        cout << "*";
        for (int j = 1; j <= i - 2; j++)
        {
            cout << "  ";
        }
        cout << "*";
        cout << endl;
    }
    return 0;
}