#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
    }
    for(int  j=n-1;j>=0;j--){
        cout << x[j] << " ";
    }
        return 0;
}