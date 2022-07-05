/*CODE BY SOWHAM_18*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
     string str = {"0          0           0           0           0           0           0           0"};
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int s[4];
        for (long long int i = 0; i < 4; i++)
        {
            cin >> s[i];
        }
        sort(s, s + 4);
        // if (s[0] < 0)
        // {
        // //     // long long int q = (s[0] + s[2]) / 2;
        // //     // long long int w = (s[0] + s[3]) / 2;
        // //     // if ((s[2] - q) * q == s[3] && q / (s[2] - q) == s[1] && q >= 1 && (s[2] - q) >= 1 && q <= 10000 && (s[2] - q) <= 10000)
        // //     // {
        // //     //     cout << q << " " << s[2] - q << endl;
        // //     // }
        // //     // else if ((s[3] - w) * w == s[2] && w / (s[3] - w) == s[1] && w >= 1 && (s[3] - w) >= 1 && w <= 10000 && (s[3] - w) <= 10000)
        // //     // {
        // //     //     cout << w << " " << s[3] - w << endl;
        // //     // }
        // //     // else
        // //     // {
        // //     //     cout << "-1"
        // //     //          << " "
        // //     //          << "-1" << endl;
        // //     // }
        //     long long int r = (s[0] + s[2]) / 2;
            
        //     long long int e = (s[1] + s[2]) / 2;
            
        //     long long int j = (s[0] + s[3]) / 2;
            
        //     long long int l = (s[1] + s[3]) / 2;
            
        //      long long int m = s[2] - r, n = s[2] - e, o = s[3] - j, p = s[3] - l;
        //     if (s[1] == s[2])
        //     {
        //         long long int y = (s[0] + s[3]) / 2;
        //         cout << y << " " << s[3] - y << endl;
        //     }

        //     // else
        //     // {
        //     //     if ((s[2] - r) * r == s[3] && /* r/(s[2]-r)==s[1] &&*/ r>=1 && (s[2]-r)>=1 && r<=10000 && (s[2]-r)<=10000)
        //     //     {

        //     //         cout << r << " " << s[2] - r << endl;
        //     //     }
        //     if ((r % 1 == 0) && (r != 0) && (m % 1 == 0) && (m != 0))
        //     {
        //         if (r / m == s[1] && r * m == s[3] && r >= 1 && m >= 1 && m<= 10000 && r <= 10000)
        //         {
        //             cout << r << " " << m << endl;
        //             continue;
        //         }
        //     }
        //      if ((e % 1 == 0) && (e != 0) && (n % 1 == 0) && (n != 0))
        //     {
        //         if (e / n == s[0] && e * n == s[3] && j >= 1 && n >= 1 && n <= 10000 && e <= 10000)
        //         {
        //             cout << e << " " << n << endl;
        //             continue;
        //         }
        //     }
        //      if ((j % 1 == 0) && (j != 0) && (o % 1 == 0) && (o != 0))
        //     {
        //         if (j / o == s[1] && j *o == s[2] && j >= 1 && o >= 1 && o <= 10000 && j <= 10000)
        //         {
        //             cout << j << " " << o << endl;
        //             continue;
        //         }
        //     }
            
        //      if ((l % 1 == 0) && (l != 0) && (p % 1 == 0) && (p != 0))
        //     {
        //         if (l / p == s[0] && l * p == s[2] && l >= 1 && p >= 1 && p <= 10000 && l <= 10000)
        //         {
        //             cout << l << " " << p << endl;
        //             continue;
        //         }
        //     }
        //     cout << "-1"
        //          << " "
        //          << "-1" << endl;
        
        // }
        // else if (s[0] >= 0)
        // {
            long long int r = (s[0] + s[2]) / 2;
            
            long long int e = (s[1] + s[2]) / 2;
            
            long long int j = (s[0] + s[3]) / 2;
            
            long long int l = (s[1] + s[3]) / 2;
            
             long long int m = s[2] - r, n = s[2] - e, o = s[3] - j, p = s[3] - l;
            // if (s[1] == s[2])
            // {
            //     long long int y = (s[0] + s[3]) / m
            //     cout << y << " " << s[3] - y << endl;
            // }

            // else
            // {
            //     if ((s[2] - r) * r == s[3] && /* r/(s[2]-r)==s[1] &&*/ r>=1 && (s[2]-r)>=1 && r<=10000 && (s[2]-r)<=10000)
            //     {

            //         cout << r << " " << s[2] - r << endl;
            //     }
            if ((r % 1 == 0) && (r != 0) && (m % 1 == 0) && (m != 0))
            {
                if (r / m == s[1] && r * m == s[3] && r >= 1 && m >= 1 && m<= 10000 && r <= 10000)
                {
                    cout << r << " " << m << endl;
                    continue;
                }
            }
             if ((e % 1 == 0) && (e != 0) && (n % 1 == 0) && (n != 0))
            {
                if (e / n == s[0] && e * n == s[3] && j >= 1 && n >= 1 && n <= 10000 && e <= 10000)
                {
                    cout << e << " " << n << endl;
                    continue;
                }
            }
             if ((j % 1 == 0) && (j != 0) && (o % 1 == 0) && (o != 0))
            {
                if (j / o == s[1] && j *o == s[2] && j >= 1 && o >= 1 && o <= 10000 && j <= 10000)
                {
                    cout << j << " " << o << endl;
                    continue;
                }
            }
            
             if ((l % 1 == 0) && (l != 0) && (p % 1 == 0) && (p != 0))
            {
                if (l / p == s[0] && l * p == s[2] && l >= 1 && p >= 1 && p <= 10000 && l <= 10000)
                {
                    cout << l << " " << p << endl;
                    continue;
                }
            }
            cout << "-1"
                 << " "
                 << "-1" << endl;
        
        }
       
    // }


return 0;
}