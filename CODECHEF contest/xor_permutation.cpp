#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int number;
    cin >> number;
    if(number<4){
        cout << "-1" << endl;
    }else if(number==4){
        cout << "1 2 4 3" << endl;
    }else if(number==5){
        cout << "5 1 2 4 3" << endl;
    }else{
        cout << "2 4 3 1 ";
        for(int i=5; i<number; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}
signed main(){
int ChaliyeJao;
cin >> ChaliyeJao;
while(ChaliyeJao--){
    
}
    return 0;
}