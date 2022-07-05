#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int a,b;
    cin >> a >> b;

   long long int d=__gcd(a,b);
   if(a==1 || b==1){
       cout << "-1" << endl;
   }else if(d==1){
       cout << "1" << endl;
   }else if(d>1){
       cout << "0"<< endl;
   }
}
    return 0;
}