#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
while(t--){
    long long int n;
    cin >> n;
    string str;
    cin >> str;
    long long int num=0;
    if(n==4){
        if(str=="JGEC")
        {
            cout << "1" << endl;
        }
    }else if(n<4){
        cout << "0" << endl;
    }else{
    for(long long int i=0;i<n;i++){
      if(str[i]=='J' && str[i+1]=='G' && str[i+2]=='E' && str[i+3]=='C'){

          num++;
      }
    }
    cout << num << endl;
    }

    
}
    return 0;
}