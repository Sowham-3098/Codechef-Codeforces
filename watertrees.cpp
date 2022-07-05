#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,x=0,c=0;
    cin >> n;
    int str[n];
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    sort(str,str+n);

    for(int i=0; i<n; i++){
        x+=(str[n-1]-str[i]);
    }
    cout << x << endl;
       if(x%3==0){
           cout << (x/3)*2 << endl;
       }else if(x%3==1){
           cout << ((x/3)*2)+1;
       }else if(x%3==2){
           cout << ((x/3)*2)+3;
       }
    
    
}
    return 0;
}