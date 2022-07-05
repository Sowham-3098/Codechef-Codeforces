// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long int t;
//     cin >> t;
//     while (t--)
//     {
//         // long long int number;
//         // cin >> number;

//         // long long int function = number & ~(number - 1);
//         // if (number == function || number % 2 != 0)
//         // {
//         //     cout << "-1" << endl;
//         // }
//         // else
//         // {
//         //     cout << function / 2 << " " << number / 2 << " " << (number - function) / 2 << endl;
//         // }
//         // // int a,b,c;
//         // // cin >>a >>b;
//         // // c=a^b;
//         // // cout << c << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int sbg(int n)
{
    int i = 2;
    while (1)
    {

        if (i < n)
            i *= 2;
        else
        {
            return i / 2;
        }
    }
}
bool bits(int y)
{
    for (int i = 1; i >= 1; i++)
    {
        if (y == pow(2, i))
        {
            return true;
            break;
        }
        else if (pow(2, i) > y)
        {
            return false;
            break;
        }
    }
}
int main()
{
    int t;
    
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num % 2 != 0 | num == 2)
        {
            cout << -1 << endl;
        }
        else if (bits(num))
        {
            cout << -1 << endl;
        }
        else
        {
            if (num % 4 != 0)
            {
                cout << "0 1 " << num / 2 << endl;
            }
            else
            {
                if (num % 8 != 0)
                {
                    cout << "0 2 " << num / 2 << endl;
                }
                else
                    cout << 0 << " " << sbg(num / 2) << " " << (num / 2) - sbg(num / 2) << endl;
            }
        }
    }
    return 0;
}