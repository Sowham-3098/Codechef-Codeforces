#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int s,b;
    cin >> s >> b;
    if(s>b){
        cout << "NO" << endl;
    }else{
        if(s%b==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
    return 0;
}