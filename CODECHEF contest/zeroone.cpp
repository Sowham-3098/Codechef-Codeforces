#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
int t;
cin >> t;
while(t--){
    int height;
    cin >> height;

    if(height%2==0){
        cout << "1";
        for(int i=0;i<height-2;i++){
           cout << "0";
        }
        cout<< "1" << endl;
    }
    else{
        for(int i=0;i<(height-1)/2;i++){
           cout << "10";
        }
        cout << "1" << endl;
    }
}
    return 0;
}