#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,x=0,y=0,z=0,s=0;
    cin >> n;
    int arr[n];
    for(int i=0;i < n;i ++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
           x++;
        }

        if(arr[i]%2==0){
            y++;
        }else{
            z++;
        }

        if(arr[i]==1){
            s++;
        }
    }
    if(x==n-1){
        cout << "YES" << endl;
    }else if(y==n){
        cout << "YES" << endl;
    }else if(s==1){
        cout << "NO" <<  endl;
    }
}
    return 0;
}