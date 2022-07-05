#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,x=0;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]>=10 && ar[i]<=60){
            x++;
        }
    }
    cout << x << endl;
}
    return 0;
}