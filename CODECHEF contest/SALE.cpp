#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int x,y,z;
    cin >> x >> y;
  if(x<3){
      cout << x*y << endl;
  }else{
      z=x/3;
      if(x%3==0){
          
          cout << z*2*y << endl;
      }else if(x%3==1){
          cout << (z*2*y)+y<< endl;
      }else if(x%3==2){
          cout << (z*2*y)+(2*y) << endl;
      }
  }
    

}
    return 0;
}