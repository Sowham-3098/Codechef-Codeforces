#include<bits/stdc++.h>
// #define int long long int
using namespace std;
int xor1(vector<int>& v1){
     int x=v1[0];
     int y=v1.size();
     for(int i=1; i<y;i++){
        x=x^v1[i];
     }
     return x;
}
int main(){
int ChaliyeJao;
cin >> ChaliyeJao;
while(ChaliyeJao--){
    int n;
    cin >> n;
    int arr[n];
    vector<int>v1;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        v1.push_back(arr[i]);
    }
     int x=0,y=0;
     for(int i=0; i<n; i++){
        x=v1[i];
       v1.erase(v1.begin());
       
        y=xor1(v1);
        cout << y << endl;
        if(x==y){
            cout << x << endl;
            break;
        }else{
            v1.push_back(x);
        }



        
        

     }
    

}
    return 0;
}