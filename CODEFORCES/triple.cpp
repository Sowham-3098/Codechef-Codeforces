#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin >> t;
while(t--){
    long long int n;
    cin >> n;
    long long int ar[n];
    for(long long int i=0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    long long int count=0,d=0,e=0;
    for(long long int i=0; i<n-1; i++){
        if(ar[i]==ar[i+1])
        {
            count++;
            if(count==2){
             d++;
             e=ar[i];
             break;
            }
        }else{
            count=0;
        }
    }
    if(d>0){
        cout << e << endl;

    }else{
        cout << "-1" << endl;
    }
}
    return 0;
}