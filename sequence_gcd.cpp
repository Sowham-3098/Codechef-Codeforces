#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
         int n,m,sum=0,g;
         cin >> n >> m;
         int A[n],B[n];

         for(int i=0;i<n; i++){
             cin >> A[i];
         }
         for(int i=0;i<n; i++){
             while(A[i]!= 0){
                 B[i]=A[i];

                 
             }
             sum+=B[i];
             if (m==sum){
                g=A[i]-B[i];
             }else{
                 i++;
             }
             
         }
         cout << g << endl;
    }
    return 0;
}