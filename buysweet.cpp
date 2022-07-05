#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,m;
    cin >> n >> m;
    int ar[n],arr[n];
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
     for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[i].first = ar[i];

    }
    int x=*min_element(ar,ar+n);
    int y=*max_element(ar,ar+n);

    while(m<x){
        
    }


}
    return 0;
}