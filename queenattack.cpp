#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    int z,x,y;
    cin >> z >> x >> y ;

   if(z%2==0){
       if(x==1 || y==1 || x==z || y==z){
           cout << (z-1)*3<< endl;
       }else{
           
           int a=min((z-x),(z-y));
           int b=min((z-x),(y-1));
           int c=min((x-1),(y-1));
           int d=min((z-y),(x-1));
           cout << (z-1)*2 + (a+b+c+d) << endl;
           
       }
   } else{
       if(x==1 || y==1 || x==z || y==z){
           cout << (z-1)*3<< endl;
       }else if(x==(z+1)/2 && y==(z+1)/2){
           cout << (z-1)*4<< endl;
       }else{
           int a=min((z-x),(z-y));
           int b=min((z-x),(y-1));
           int c=min((x-1),(y-1));
           int d=min((z-y),(x-1));
           cout << (z-1)*2 + (a+b+c+d) << endl;
       }
   }

}
    return 0;
}