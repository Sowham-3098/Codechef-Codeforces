#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int num;
    cin >> num;
    if(num<=4){
      cout << num << endl;
    }else if(num>4){
        if(num%4==0){
            cout << num- ((num/4)-1) << endl;
        }else if(num%4==1){
            cout << num-((num/4)+1) << endl;
        }
    }





}
    return 0;
}