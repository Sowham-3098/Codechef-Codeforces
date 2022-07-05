#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int n;
    cin >> n;
    long long int ar[n];
    long long int odd=0,even=0;
    for(long long int i=0; i<n; i++){
        cin >> ar[i] ;
        if(ar[i]%2==0){
           even++;
        }else{
            odd++;
        }
    }
    if(ar[0]%2==0){
        if(ar[n-1]%2==0){
            cout << even-1 << endl;
        }else{
            if(even<=odd){
           cout << even << endl;
            }else{
                cout << odd << endl;
            }
        }
    }else{
        if(ar[n-1]%2==0){
            cout << odd<< endl;
        }else{
          if(even<=odd){
           cout << even << endl;
            }else{
                cout << odd << endl;
            }
        }
    }

}
    return 0;
}