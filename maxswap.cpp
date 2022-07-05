/*CODE_BY_SOWHAM*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string sb;
        vector<int> odd0, odd1,even0,even1,vec0,vec1;
        int count1 = 0, count2 = 0;
        cin >> x >> sb;

        for (int i = 0; i < x; i++)
        {
            if (i % 2 == 0)
            {
                even0.push_back(sb[i] - '0');
                even1.push_back(sb[i] - '0');
            }
            else
            {
                odd0.push_back(sb[i] - '0');
                odd1.push_back(sb[i] - '0');
            }
        }
        
        sort(even0.begin(), even0.end(), greater<int>());
        sort(odd0.begin(), odd0.end());
        for (int i = 0; i < even0.size(); i++)
        {

            vec1.push_back(even0[i]);

            if (x % 2 != 0 && i >= even0.size() - 1)
            {
                continue;
            }
            else
            {
                vec1.push_back(odd0[i]);
            }
        }
        for (int i = 0; i < x - 1; i++)
        {
            if (vec0[i] == 0 && vec0[i + 1] == 1)
            {
                count1++;
            }
        }
        
        sort(even1.begin(), even1.end());
        sort(odd1.begin(), odd1.end(), greater<int>());
        for (int i = 0; i < even1.size(); i++)
        {

            vec1.push_back(even1[i]);

            if (x % 2 != 0 && i >= even1.size() - 1)
            {
                continue;
            }
            else
            {
                vec1.push_back(odd1[i]);
            }
        }

        for (int i = 0; i < x - 1; i++)
        {
            if (vec1[i] == 0 && vec1[i + 1] == 1)
            {
                count2++;
            }
        }
        cout << max(count1, count1) << endl;
    }
    return 0;
}