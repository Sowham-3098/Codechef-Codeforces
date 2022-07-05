#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    
    char S[5],T[5],M[5];
    for(int i=0;i<5;i++){
        cin >>S[i];

    }for(int i=0;i<5;i++){
        cin >>T[i];

    }
    for(int i=0;i<5;i++){
        if(S[i]==T[i]){
            M[i]='G';
        }else{
            M[i]='B';
        }

    }
    for(int i=0;i<5;i++){
        cout <<M[i];
        

    }


}
    return 0;
}