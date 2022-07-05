#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,x;
    cin >> n >> x;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    for(int i=1;i>=1;i++){
        if((sum+i)>=x){
            cout << i << endl;
            break;
        }
    }

}
    return 0;
}