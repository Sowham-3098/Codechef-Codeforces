#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(n%2!=0){
            cout << "Mike" << endl;
        }else{
            cout << "Joe" << endl;
        }
    }
    return 0;
}