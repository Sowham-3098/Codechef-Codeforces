#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int first,pass,second;
    cin >> pass >> first >> second;
    int xor_output=0;
    int prefer= -1;
    for(int i=pass-1;i>=0;i--){
        if(((1<<i)&first)>0 && ((1<<i)&second)>0){
         continue;
        }
        else if(((1<<i)&first)==0 && ((1<<i)&second)==0){
            xor_output |= (1<<i);
        }else{
            if(prefer== -1){
                if(((1<<i)&first)==0 && ((1<<i)&second)>0){
                    prefer = 0;
                }else{
                    prefer= 0;
                    xor_output |= (1<<i);
                }
            }else{
                if(((1<<i)&first)==0 && ((1<<i)&second)>0){
                     xor_output |= (1<<i);
                }
            }
        }
    }
    cout << xor_output << endl;
}

signed main(){
int ChaliyeJao;
cin >> ChaliyeJao;
while(ChaliyeJao--){
    solve();
}
    return 0;
}