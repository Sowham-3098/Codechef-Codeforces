#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int g , h, i;
    cin >>g >> h >> i;
     if(g/i== h && g%i==0){
        
         cout << "YES" << endl;
        
     }else if(g/i<h){
         cout << "YES" << endl;}
         else{
         cout << "NO" << endl;
     }
}
    return 0;
}