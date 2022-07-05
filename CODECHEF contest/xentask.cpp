#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    long long int n;
    cin >> n;
    long long int ar[n],arr[n];
    for(long long int i=0;i<n;i++){
        cin >> ar[i];
    }
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
    }
    long long int odd=0,odd1=0,even=0,even1=0;
    for(long long int i=0;i<n;i++){
        if(i%2!=0){
           odd+=ar[i];
        }else{
            even+=ar[i];
        }
    }
    for(long long int i=0;i<n;i++){
        if(i%2!=0){
            odd1+=arr[i];
        }else{
            even1+=arr[i];
        }
    }

    long long int _ar=odd+even1;
    long long int _arr=odd1+even;
    if(_ar>=_arr){
        cout<<_arr<<endl;
    }else{
        cout << _ar<< endl;
    }
}
    return 0;
}