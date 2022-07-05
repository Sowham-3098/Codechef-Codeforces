#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        int x = 0, y = 0, a = 0, b = 0;
        cin >> n;
        int str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 0)
            {
                x++;
            }
            else if (str[j] == 1)
            {
                y++;
            }
        }
        /*for(int i=0;i<n;i++){
            if(str[i]+str[n+i-1]==0){
             a++;
            }else if(str[i]+str[n+i-1]==1){
                b++;
            }
        }*/
        if (x == n || y == n)
        {
            cout << "yes" << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                if (x == y)
                {
                    cout << "yes" << endl;
                }
                else if (x % 2 == 0 && y % 2 == 0)
                {
                    cout << "yes" << endl;
                }else{
                    cout << "no" << endl;
                }
            }
            else
            {
                cout << "yes" << endl;
                /*if (n % 2 != 0)
                {
                    if (x == y - 1 || y == x - 1)
                    {
                        cout << "yes" << endl;
                    }
                    else
                    {
                        cout << "no" << endl;
                    }
                }*/
            }
        }
    }
    return 0;
}