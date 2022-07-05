#include<iostream>
using namespace std;
int main(){
    int s;
    cin >> s;

    if(s%5==0 && s%11==0){
        cout << "BOTH" <<endl;
        
    }else if(s%5==0 || s%11==0){
        cout << "ONE" << endl;

    }else{
        cout << "NONE" << endl;
    }
    return 0;
}