#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool isPower(int x, int y)
{
    // logarithm function to calculate value
    int res1 = log(y) / log(x);
    int res2 = log(y) / log(x); // Note : this is double
 
    // compare to the result1 or result2 both are equal
    return (res1 == res2);
}

signed main(){
int testcase;
cin >> testcase;
while(testcase--){
    int sowham;
    cin >> sowham;
    int f=0;
    if(sowham%2!=0){
        cout << "1" << endl;
    }else{
        for(int i=1;i<=sowham/2;i++){
            
             if(isPower(i,sowham)%1==0){
                 int x=isPower(i,sowham);
                 if((i+x)%2==0){
                     f++;
                     cout << "1" << endl;
                     break;
                 }else{
                        
                     continue;
                     
                 }
             } else{
               
                continue;
             } 
        }
         if(f==0){
        cout <<"-1" << endl;
    }

    }

  
}
    return 0;
}