#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    string bro;
    cin >> bro;
    int n=bro.length();
    sort (bro.begin(),bro.end());
    int x=0,y=0;

        for(int i=0;i<n;i++){
            if(bro[i]==bro[i+1]){
                x++;
                i++;
            }else{
                y++;
            }
        }
    

    

    cout << y << endl;

}
    return 0;
}