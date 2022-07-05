#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin >> t;
while(t--){
   long long  int x,y,z,j=0;
    cin >> x >> y >> z ;
    
    
   


    long long int sum=y+z;
    for(long long int i=2;i<x;i++){
         j=sum%10;
         sum+=j;
         
         
         
    }

   
    if(sum%3==0){
       cout << "YES" << endl;
    
    }else{
        cout << "NO" << endl;
    }

}
    return 0;
}
