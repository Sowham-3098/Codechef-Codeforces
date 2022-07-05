#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin >>a >> b;

        if(b<=a/2)
        {
            cout << b << endl;
        }else if(b>=a/2){
            cout << a/2 << endl;
        }
           
        
    }
    return 0;
}