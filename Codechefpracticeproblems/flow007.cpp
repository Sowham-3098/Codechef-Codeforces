#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0, remain;

        count = n / 100;
        remain = n % 100;
        count = count + (remain / 50);
        remain = remain % 50;
        count = count + (remain / 10);
        remain = remain % 10;
        count = count + (remain / 5);
        remain = remain % 5;
        count = count + (remain / 2);
        remain = remain % 2;
        count = count + (remain / 1);
        remain = remain % 1;
        cout << count << endl;
    }
    return 0;
}