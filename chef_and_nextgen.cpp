#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
         long int p,q,r,s;
        cin >>p >>q >> r >> s;

        if (p*q<=r*s){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}