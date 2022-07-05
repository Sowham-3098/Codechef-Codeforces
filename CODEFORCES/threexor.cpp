#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
int ChaliyeJao;
cin >> ChaliyeJao;
while(ChaliyeJao--){
    int n;
    cin >> n;
    if(n%2!=0){
        cout << "-1" << endl;
    }else{
        cout << "0" << " "<< n/2 << " "<<n/2 << endl;
    }
}
    return 0;
}