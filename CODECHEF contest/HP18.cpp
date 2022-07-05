#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int n,a,b,x=0,y=0,z=0;
    cin >> n >> a >> b;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i]; 
    }
    for(int i=0;i<n;i++){
        if(h[i]%a==0){
            x++;
        }else if(h[i]%b==0){
            y++;
        }else if(h[i]%a==0 && h[i]%b==0){
            z++;
        }
    }
    if(z>0){
        x++;
    }else if(x>y){
       cout << "Bob" << endl;
 
    }else if(x<y){
        
        cout << "Alice" << endl;
    }
}
    return 0;
}