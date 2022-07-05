#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a>>b >>c;

                         int d=10007;
        for(int i=0;i<=a;i++){
            for(int j=0;j<=a;j++){
                int s=100*j+4*i;
                if(s>=a){
                    d=min(d,i*c+j*b);
                }
            }
        }
        cout<<d<<endl;
       
            }
            
    
    return 0;
}