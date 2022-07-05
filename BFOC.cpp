#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int x,y,z;
    cin >> x >> y >> z;
    
    for(long long int i=x;i>=1;i--){
      long long int l=z+(i-1);
      if(y>=l){
          y=y%l;
          i=y;
      }else if(y<l){
          continue;
      }
      l=0;
    }

    cout << y << endl;

}
    return 0;
}