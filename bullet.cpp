#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int m,n,o;
    cin >> m >> n >> o;
    int p=n/m;
    if(o-p<1){
        cout << "0" << endl;
    }else{
        cout << o-p << endl;
    }
}
    return 0;
}