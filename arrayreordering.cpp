#include<bits/stdc++.h>
using namespace std;
// int gcd(int x, int y){
    
// }
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int gcd=0;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(__gcd(ar[i],2*ar[j])>1){
                gcd++;
            }
        }
    }
    cout << gcd << endl;
}
    return 0;
}