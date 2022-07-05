#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n,s=0;
    cin >> n ;
    vector<int> a(n,0);
    for(int i=0;i<n;i++){
        cin >> a[i];s+=a[i];
    }
    s=s/(n+2);
    for(int i=0;i<n;i++){
        cout << a[i]-s << " ";
    }
    cout << endl;
}
signed main(){
int ChaliyeJao;
cin >> ChaliyeJao;
while(ChaliyeJao--){
    
}
    return 0;
}