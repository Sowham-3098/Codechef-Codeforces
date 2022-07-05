#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin >> t;
while(t--){
   long long  int x,y;
    cin >> x;
   for(long long int i=0;i>=0;i++){
       y=pow(2,i);
       if(y>=x){
           cout << y << endl;
           break;
       }
   }
    
}
    return 0;
}
