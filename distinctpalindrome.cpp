#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
int t;
cin >> t;
while(t--){
    char al='a';
    char alphabet[26];
    for(int i=1;i<=26;i++){
       alphabet[i]=al;
       al++;
    }
    int num,num1;
    cin >> num >> num1;
    if(num==1 && num1==1){
        cout <<"a" << endl;
    }
    else if(num%2==0){
        if(num1>= (num/2)+1){
            cout << "-1" << endl;
        }else{
            
            int j=0;
            for(int i=1;i<=num1;i++){
                cout << alphabet[i];
                j=i;
              
            }
            
            for(int i=0;i<num-num1*2;i++){
        
                cout << alphabet[j];
            }
            for(int i=num1;i>=1;i--){
                cout << alphabet[i];
            }
            cout << endl;
        }
    } 
   else if(num%2!=0){
     if(num1>= (num/2)+2){
            cout << "-1" << endl;
        }else{
            if((num+1)%num1!=0){
            int j=0;
            for(int i=1;i<=num1;i++){
                cout << alphabet[i];
                j=i;
              
            }
            
            for(int i=0;i<num-(num1*2);i++){
        
                cout << alphabet[j];
            }
            for(int i=num1;i>=1;i--){
                cout << alphabet[i];
            }
            cout << endl;
            }else{
            for(int i=1;i<=num1;i++){
                cout << alphabet[i];
            
              
            }
            
           
            for(int i=num-num1;i>=1;i--){
                cout << alphabet[i];
            }
            cout << endl;
            }
        }
   }
 
    
}
    return 0;
}