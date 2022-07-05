#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        string s;
        string s1,s2;
        cin >> s;
        long long int n = s.size(), sum = 0;
        long long int x = 0, temp,y=0;
        for (long long int j = 0; j < n; j++)
        {

            sum += s[j] - '0';
        }
        stringstream kushal(s);
        kushal >> x;
        for (long long int i = 0; i < 10; i++)
        {
            if ((sum + i) % 9 == 0)
            {
                temp = i;
                break;
            }
        }
        for(long long int j=0;j<n;j++){
          /*  if(temp< s[i]){
                cout << temp << s << endl;
            }
            else*/ if(temp>=s[j]-'0'){
            y++;
            }

        }
        
        if(y>=n){
            cout << "Case #" << i<< ": "<< s << temp << endl;
        }else{
            s1=s.substr(1,y);
            s2=s.substr(y,n);
            cout << "Case #" << i<< ": "<< s1 << temp << s2 << endl;
        }
        
    }
    return 0;
}