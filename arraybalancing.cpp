#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    long long int x,sowham,sohom,minimum,sum=0;
        cin >> x;
        int array[x], array1[x];
        for (int i = 0; i < x; i++)
        {
            cin >> array[i];
        }
        for (long long int i = 0; i < x; i++)
        {
            cin >> array1[i];
        }
        for(int i = 0; i < x-1; i++){
            sowham=abs(array[i]-array[i+1])+abs(array1[i]-array1[i+1]);
            sohom=abs(array[i]-array1[i+1])+abs(array1[i]-array[i+1]);
            minimum=min(sowham,sohom);
            sum+=minimum;
        }
        cout<<sum<<endl;
}
    return 0;
}