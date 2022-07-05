#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
for(int i=1; i<=t; i++) {
    long long int n,cnt=0;
    cin >> n;
    long long int str[n];
    for(long long int j=0; j<n; j++) {
        cin >> str[j];
    }
    bool sowham=false;
    for(long long int j=0; j<n; j++) {
        if(str[i]){
            sowham =true;

        }else{
            if(sowham)cnt++;
            sowham=false;
        }
    }

    cout << "Case #" << i << ": " << cnt << endl;
    
}
    return 0;
}