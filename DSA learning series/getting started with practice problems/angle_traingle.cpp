#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >>z;

    if (x+y+z ==180 && x>0 && y>0 && z>0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}