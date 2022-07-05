#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n ;
        
        int arr[2*n];
        for (int i=0;i<2*n;i++){
            cin >> arr[i];
            }
       sort(arr,arr+n);

       
       cout << arr[n]+1;
       sort(arr+(n+1),arr+2*n);
       
       cout << arr[2*n]+1;


    }
    return 0;
}