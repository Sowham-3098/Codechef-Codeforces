#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,z=0;
        cin >>n>>k;
        string s;
        cin >> s;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
            {
                z+=1;
            }
        }
        if(k>=z){
            if((k-z)%2==0)
            cout<<"YES"<<endl;
            else if(n%2!=0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}