#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,count=0,remain;
        cin >> n;
        int r=n;
        int arr[6]={100,50,10,5,2,1};
        for(int i=0;i<6;i++){
            count =count + (r/ arr[i]);
            r = r % arr[i];
        }
        cout << count << endl;
    }
    return 0;
}