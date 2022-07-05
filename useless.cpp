#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin >> n>>m;
    int ar[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }

    sort(ar,ar+n);
int sum=0,total=1;
    for(int i=0;i<n;i++){
        if(ar[i]<=0 && total<=m){
           sum+=abs(ar[i]);
           total++;
        }
    }
    cout << sum << endl;

    return 0;
}