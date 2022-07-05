#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int k=1;k<=t;k++){
    {
        string a;
        string b;
        int x = 0, y = 0;
        cin >> a >> b;
        int n1 = a.length();
        int n2 = b.length();

        if (n2 < n1)
        {
            cout <<"case #"<< k <<  "IMPOSSIBLE" << endl;
        }
        else if (n1 == n2)
        {
            for (int i = 0; i < n1; i++)
            {
                if (a[i] == b[i])
                {
                    x++;
                }
            }
            if (x == n1)
            {
           cout <<"case #"<< k <<  "0" << endl;
            }else{
                cout <<"case #"<< k <<  "IMPOSSIBLE" << endl;
            }
        }
        else
        {
            for (int i = 0; i < n2; i++)
            {
                if (a[i] == b[i])
                {
                    y++;
                }
                else
                {
                    for (int j = i + 1; j < n2; j++)
                    {
                        if (a[i] == b[j])
                        {
                            y++;
                            continue;
                        }
                    }
                }
                if(y==n1){
                   cout <<"case #"<< k <<  n2-n1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}