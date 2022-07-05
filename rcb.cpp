#include<bits/stdc++.h>
using namespace std;
int main(){
long long int x,y,z=0;
cin >> x >> y ;

if(x<y){
    cout << y ;
}
else{
  
  int z=(x/y)+1;
  cout << y*z;
}

    return 0;
}