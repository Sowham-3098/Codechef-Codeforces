#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
int t;
cin >> t;
while(t--){
//     int n,x;
//     cin >> n >> x;
//     int str[n];
//     int odd=0,even=0,ch=0,sum=0;
    
//     for(int i=0;i<n;i++){
//         cin >> str[i];
        
//     }
// sort(str,str+n);

// for(int i=0;i<n;i++){
//     if(str[i]>=x){
//         ch++;
//     sum+=(str[i]-x);
//     }else{

//         odd++;
//       sum+=str[i];
//     }
// }
//   if(odd==1 && sum< x){
//       cout << ch+x/sum << endl;
      
//   }
//   cout << ch + sum/x -odd<< endl;
    
// }
int num,cons,mar;
cin >> num >> cons;
int arr[num];
for(int i=0;i<num;i++){
    cin >> arr[i];
    mar=arr[0];
      mar=min(mar,arr[i]);
}


int ans =cons/mar +(cons%mar!=0);
cout << max(num,ans)<< endl;
}
    return 0;

}