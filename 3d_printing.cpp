/*CODE by SOWHAM BHUIN*/
// CODE JAM PROBLEM 3D PRINTING
#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        long long int a1[4], a2[4], a3[4];
        vector<int> vec;
        for (long long int i = 0; i < 4; i++)
        {
            cin >> a1[i];
        }
        for (long long int i = 0; i < 4; i++)
        {
            cin >> a2[i];
        }
        for (long long int i = 0; i < 4; i++)
        {
            cin >> a3[i];
        }
        long long int x = std::min({a1[0], a2[0], a3[0]}, comp);
        vec.push_back(x);
        long long int y = std::min({a1[1], a2[1], a3[1]}, comp);
        vec.push_back(y);
        long long int z = std::min({a1[2], a2[2], a3[2]}, comp);
        vec.push_back(z);
        long long int w = std::min({a1[3], a2[3], a3[3]}, comp);
        vec.push_back(w);

        if (vec[0] + vec[1] + vec[2] + vec[3] < 1000000)
        {
            cout << "Case #" << k << ":"<< " "
                 << "IMPOSSIBLE" << endl;
        }
        else
        {
             int codejam = 1000000;
            cout << "Case #" << k << ":"<< " "<< min(vec[0], codejam) << " ";
            codejam -= vec[0];
            if (codejam < 1)
            {
                cout << "0 0 0" << endl;
            }
            else
            {
                cout << min(vec[1], codejam) << " ";
                codejam -= vec[1];
                if (codejam < 1)
                {
                    cout << "0 0" << endl;
                }
                else
                {
                    cout << min(vec[2], codejam) << " ";
                    codejam -= vec[2];
                    if (codejam < 1)
                    {
                        cout << "0" << endl;
                    }
                    else
                    {
                        cout << min(vec[3], codejam) << " " << endl;
                    }
                }
            }
        }
    }
    return 0;
}