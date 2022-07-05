#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
    int ChaliyeJao;
    cin >> ChaliyeJao;
    while (ChaliyeJao--)
    {
        int x3, y3, x4, y4;
        cin >> x3 >> y3 >> x4 >> y4;
        int x1 = abs(x3 - x4);
        int y1 = abs(y3 - y4);
        if(x3==x4){
            if(y1==2 || y1==4){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(y3==y4){
            if(x1==2 || x1==4){
                cout << "YES" << endl;
            }else {
                cout << "NO" << endl;
            }
        }else if()

       

    }

    return 0;
}