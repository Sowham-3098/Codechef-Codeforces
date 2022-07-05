#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
     long long int  n;
    cin >> n;
    vector<long long int> s(n);
    map<long long int, long long int> sb;
    for(long long int i = 0; i < n;i++){
        cin >> s[i];
        sb[s[i]]++;
    }
    long long h=-1e18, g=-1e18;
    long long ans =0;
    for(auto it: sb){
        if(it.second<=g){
                continue;
                h=it.first;
                g=it.second;
        }
        long long j=n-g;
        
        while(j>0){
            ans++;
            if(g<j){
                j-=g;
                ans+=g;
                g*=2;

            }else{
                ans+=(j);
                break;
            }
        }
        
    
        
    }
    cout << ans << endl;
}
    return 0;
}