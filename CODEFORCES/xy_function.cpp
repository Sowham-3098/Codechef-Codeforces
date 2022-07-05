#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin >> t;
while(t--){
    long long int a,b,c,d;
    cin >> a >> b >> c >> d;

    long long int x[a],sum=0;
    
    for(long long int i=1;i<=a;i++){
       x[0]=0;
       if(x[i-1]+c<=b){
           x[i]=x[i-1]+c;
       }else{
          x[i]=x[i-1]-d;
       }
    }
    for(long long int i=0;i<=a;i++){
        sum+=x[i];
    }
    cout << sum << endl;
}
    return 0;
}