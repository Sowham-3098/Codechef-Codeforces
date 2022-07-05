#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int t;
    cin >> t;
    while(t--){
        int n,s=0;
        cin >> n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        for(int i=0;i<n;i++){
            i=i+s;
           for(int j=i+1;j<n;j++){
               if(arr[i]==arr[j]){
                   s++;
               }else{
                   break;
               }
           }
           
            
        }
        cout  << n-s << endl;
    }
}
    return 0;
}