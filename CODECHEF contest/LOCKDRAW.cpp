#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    long int a,b,c;
    cin >>a >> b>> c;

    if(a==b+c||a+b==c||a+c==b){
        cout <<"yes" << endl;
    }else{
        cout << "no" << endl;
    }
}
    return 0;
}