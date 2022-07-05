#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x;
    cin >> x;
    if(x%10==0){

        cout << x/10 << endl;

    }else if(x%5==0 && x<10){
        cout << x/5 << endl;
    }else if(x%5==0 && x>10){
        int z=x%10;
        cout << (x-z)/10 +1 << endl;
    }else{
        cout << "-1" << endl;
    }

}
    return 0;
}