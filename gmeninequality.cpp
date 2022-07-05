#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main(){
ll t;
cin >> t;
while(t--){
    ll d;
    cin >> d;
    ll str[d];
ll fool=0,foolish=0;
    for(ll i=0;i<d;i++){
       cin >> str[i];
       if(str[i]==-1){
           fool++;
       }else{
           foolish++;
       }
    }
    if(d%2==0){
        if((d/2)%2==0 && abs(fool-foolish)==0 ||(d/2)%2==1 && abs(fool-foolish)==2 || abs(fool-foolish)==0 ){
            cout << "YES" << endl;
            
        }else{
            cout << "NO" << endl;
        }
    }else{
        if(abs(fool-foolish)==1){
               cout  << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
}
    return 0;
}