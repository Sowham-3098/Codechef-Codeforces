#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int d,h;
    cin >> d >> h;
    if(d%4==0 && h==0){
        cout << "off" << endl;
    }else if(d%4==0 && h==1){
        cout << "on" << endl;
    }else if(d==0 && h==1){
        cout << "on" << endl;
    }else if(d==0 && h==0){
        cout << "off" << endl;
    }else if(d%4!=0 && h==0){
        cout << "on" << endl;
    }else {
        cout << "Ambiguous" << endl;
    }
}
    return 0;
}