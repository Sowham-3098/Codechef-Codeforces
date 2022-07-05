#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c && c == a)
    {
        cout << "1" << endl;
    }
    else
    {

        if (a > b && a > c)
        {
            if (b + c > a)
            {
                if (a == b || b == c || c == a)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else if (b > a && b > c)
        {
            if (a + c > b)
            {
                if (a == b || b == c || c == a)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else if (c > a && c > b)
        {
            if (a + b > c)
            {
                if (a == b || b == c || c == a)
                {
                    cout << "2" << endl;
                }
                else
                {
                    cout << "3" << endl;
                }
            }
            else
            {
                cout << "-1" << endl;
            }
        }
        else
        {
            return 0;
        }
    }
    return 0;
}