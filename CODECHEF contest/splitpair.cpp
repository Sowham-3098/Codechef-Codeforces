#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    string s;
    cin >> s;
    long long int n=s.length();
    long long int x=0,y=0;
    stringstream geek(s);
    geek >> x;

      long int length = n - 1;
        for (long int i = length; i >= 1; i--)
        {

            long int temp = pow(10,i);
            long int sum = (x / temp) + (x % temp);
            if (sum % 2 == 0)
            {
                cout << "YES" << endl;
                break;
            }
            else
            {
                y++;
            }

            
        }
        if (y >= n - 1)
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}