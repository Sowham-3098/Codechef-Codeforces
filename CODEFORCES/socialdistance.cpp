#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int n,m;
    cin >> n >> m;
    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin >> arr[i];
       
    }
    sort(arr,arr+n);
    long long int sum=(arr[0]*2)+1;
    for(long long int i=1;i<n;i++){
       sum+=(arr[i]*2)+1;
       sum-=arr[i-1];
    }
    if(n>m){
        cout << "NO" << endl;
    }else{

    if(sum-arr[0]<=m){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    }


}
    return 0;
}