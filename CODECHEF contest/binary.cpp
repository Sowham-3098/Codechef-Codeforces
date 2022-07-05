#include<bits/stdc++.h>
using namespace std;
int  decToBinary(int n)
{
  
    int binaryNum[32];
    int sum=0;
 
   
    int i = 0;
    while (n > 0) {
 
       
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--){
        sum+=binaryNum[j];
    }
    return sum;
}
 
int main(){
int t;
cin >> t;
while(t--){
    int l,m,x=0;
    cin >> l >> m;
    for(int i=l;i<=m;i++){
       x+=decToBinary(i);
    }
}
    return 0;
}