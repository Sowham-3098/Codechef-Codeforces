#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--){
    long long int n;
    cin >> n;
    long long int pos[n];
    int p=0,m=0,z=0;
    for(long long int i = 0; i < n; i++){
        cin >> pos[i];
        if(pos[i]>0){
            p++;
        
        }else if(pos[i]<0){
            m++;
        }
    }

    int d=(p*(p-1))/2;
    int e=(m*(m-1))/2;
    cout << d+e << endl;

    

    
}
    return 0;
}