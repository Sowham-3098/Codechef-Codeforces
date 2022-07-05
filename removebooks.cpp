#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long int n,a,x=0;
    cin >> n;
    long int arr[n];
    for(long int i=0;i<n;i++){
    cin >> arr[i];
    }

    sort(arr,arr+n);
    
    if(n%2==0){
        a=arr[n/2];
    }else{
        a=arr[n+1/2];
    }
    
    for(long int i=0;i<n;i++){
        if(arr[i]<a){
           x=x+arr[i];
        }else if(arr[i]>a){
            x=x+(arr[i]-a);
        }
    }

    cout << x << endl;

    return 0;
}