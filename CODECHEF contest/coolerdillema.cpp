#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    long long int s,b;
    cin >> s >> b;
    if(s>=b){
        cout << "0" << endl;
    }else{
        if(b%s==0){
            cout << b/s-1 << endl;
        }else if(b%s!=0){
            cout << b/s << endl;
        }
    }
 }
    return 0;
}