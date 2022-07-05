#include<bits/stdc++.h>
using namespace std;
#define int long long int 
signed  main(){
int t;
cin >> t;
while(t--){
    int num;
    cin >> num;
    string palind;
    for(int i=0;i<num;i++){
       cin >> palind[i];
    }

    int odd=0;
    for(int i=0; i<num/2; i++){
         if(palind[i]!=palind[num-1-i]){
             odd++;
         }
    }
    if(odd%2==0){
        cout << odd/2 << endl;
    }else{
        cout  << (odd/2)  +1  << endl;
    }
}
    return 0;
}