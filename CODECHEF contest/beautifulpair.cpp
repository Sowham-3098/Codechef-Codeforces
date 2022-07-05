#include<bits/stdc++.h>
using namespace std;
#define ll long long int



int main() {    
   // init_code();
    ll t;
    cin>>t;
    //t=1;
    while(t--){
        ll n;
        cin>>n;
        int arr[n];

        int m[MX]={0};
        ll ctr=0;
        fr(0,n)
        {
        	cin>>arr[i];
        	m[arr[i]]+=1;   
        }  
      	sort(arr,arr+n,greater<int>());        
  		
  		int size=n-1;
  		fr(0,n){
  			ctr+=size-m[arr[i]]+1;
  			size--;
  			m[arr[i]]--;
  		}
      	cout<<ctr*2<<endl;
    }
   
    return 0;
}