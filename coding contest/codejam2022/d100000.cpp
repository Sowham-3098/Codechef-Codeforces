/*CODE by SOWHAM BHUIN*/
//CODE JAM PROBLEM PUNCHED CARDS
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
for(int k=1; k<=t; k++){
  long long int n;
  cin >> n;long long int rcb[n];
  for(long long int i=0; i<n;i++){
      cin >> rcb[i];
  }
  sort(rcb,rcb+n);
  long long int ans=0;
  for(long long int i=0; i<n; i++){
      if(rcb[i]>=ans+1)
{
    ans++;
} 
 
}
 cout<<"Case #"<<k<<":"<<" " << ans << endl;
}
    return 0;
}