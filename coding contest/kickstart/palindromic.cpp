#include<bits/stdc++.h>
using namespace std;
// long long int check(long long int num) {
//    long long int rev=0,val;
//    val = num;
//    while(num > 0) {
//       rev = rev * 10 + num % 10;
//       num = num / 10;
//    }
//    if(val==rev)
//    {
//        return true;
//    }else{
//        return false;
//    };
   
// }
bool check(long long int n)
{
   
    string str = to_string(n);
 
   long long  int s = 0, e = str.length() - 1;
    while (s < e) {
 
        
        if (str[s] != str[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
 int  palindromic(long long int n)
{
    
    long long int sum=0;
    for (long long int i = 1; i <= sqrt(n); i++) {
 
       
        if (n % i == 0) {
 
            
            if (n / i == i) {
 
                
                if (check(i)) {
                    sum++;
                }
            }
            else {
 
                if (check(i)) {
                    sum++;
                }
 
                
                if (check(n / i)) {
                   sum++;
                }
            }
        }
    }
 
    
    return sum;
}
int main(){
long long int t;
cin >> t;
for(long long int i=1;i<=t;i++){
    long long int num;
    cin >> num;
    
    

    cout << "Case #" << i << " :" << palindromic(num) << endl;

}
    return 0;
}