#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x;
    cin >> x;
    int sowham[x];
    for(int i=0; i<x;i++){
        cin >> sowham[i];
    }
    int total=0,bhuin=0;
    for(int i=0; i<x;i++){
        total+=sowham[i];
    }

    for(int i=1;sowham>=0;i++){
        ++bhuin;
        total-=i;
    }

    cout << --bhuin << endl;
}
    return 0;
}