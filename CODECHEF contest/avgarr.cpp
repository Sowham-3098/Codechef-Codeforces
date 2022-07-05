#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
    int n,x;
    cin >> n >> x;
    
    
    if(n%2!=0){
        for(int i=x-n/2;i<x+n/2;i++){
            cout << i<<" ";
        }
        cout << endl;
        
    }   else{
       for(int i=1;i=n/2;i++){
           cout << x+i <<" " <<x-i;
       }
       cout << endl;
    } 
}
    return 0;
}