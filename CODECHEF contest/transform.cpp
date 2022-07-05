#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int size;
    cin >> size;
    if(size%3==0){
        cout << "NORMAL" << endl;
    }else if(size%3==1){
        cout << "HUGE" << endl;
    }else if(size%3==2){
        cout << "SMALL" << endl; 
    }
}
    return 0;
}