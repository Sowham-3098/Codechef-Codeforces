#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n;
    cin >> n;
    string null;
    cin >> null;
    int e0=0,o0=0,e1=0,o1=0;
    for(int i=0;i<n;i++){
        if(i%2==0 && null[i]=='0'){
            e0++;
        }else if(i%2==0 && null[i]=='1'){
            e1++;
        }else if(i%2!=0 && null[i]=='0'){
            o0++;
        }else if(i%2!=0 && null[i]=='1'){
            o1++;
        } 
    }
    if(e0+o0==e1+o1){
        cout << "YES" << endl;
    }
}
    return 0;
}