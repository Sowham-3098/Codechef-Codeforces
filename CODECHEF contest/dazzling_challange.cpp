#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int code,chef=1;
    cin >>code;
    // for(long long int x=2;x<=code;x++){
    //     if(x%2==0){
    //         chef=chef^x;
    //     }else{
    //         chef=chef&x;
    //     }
    // }
    if(code%4==3 || code%4==2){
        cout << "3" << endl;
    }else if(code%4==0){
        cout << code+3 << endl; 
    }else if(code%4==1){
    cout << code << endl;
    }
}
    return 0;
}