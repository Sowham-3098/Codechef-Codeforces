#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int x=0,y=0,z=0,d=0;
    for(int i=0;i<n;i++){
       if(s[i]=='1'){
           x++;
       }else if(s[i]=='0'){
           y++;
       }
    }
   if(y==n){
       cout << "0" << endl;
   }else if(x==n && n>1){
       cout << "2" <<endl;
   }else if(x==n && n==1){
       cout << "1" << endl;
   }else{
       for(int i=0;i<n-1;i++){
           if(s[i]=='1' && s[i+1]=='1'){
               z++;
           }
       }
       if(z>0 ){
           cout << "2" << endl;
       }else{
           cout << "1" << endl;
       }
   }
}
    return 0;
}