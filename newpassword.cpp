#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
for(int i=1; i<=t; i++){
    int x;
    cin >> x;
    string str;cin >> str;
    vector<char>vec;
    for(int i=0;i<x;i++){
        vec.push_back(str[i]);

    }
    vec.push_back('@');
    vec.push_back('A');
    vec.push_back('v');
     cout << "Case" << " #" << i<<": ";
     for(int i=0;i<vec.size();i++){
        cout<< vec[i];
    }
    cout << endl;
}
//     }
//     int spc=0,up=0,low=0,dig=0;
//    for(int i=0;i<x;i++){
//        if(str[i]=='#' || str[i]=='@' || str[i]=='*' || str[i]=='&'){
//            spc++;
//        }else if(
//            str[i]%1==0){
//            dig++;


//        }else if(str[i]>96 && str[i]<123){
//            low++;
//        }else if(str[i]>64 && str[i]<91){
//            up++;
//        }
       
//    }

//    if(x>=7){
//       if(spc==0){
//           vec.push_back('@');
//       }
//       if(dig==0){
//           vec.push_back('1');
//       }if(up==0){
//           vec.push_back('A');
//       }if(low==0){
//           vec.push_back('v');
//       }

//       for(int i=0; i<x;i++){
//           cout << vec[i];
//       }
//       cout << endl;
//    }else{
//        if(spc==0){
//           vec.push_back('@');
//       }
//       if(dig==0){
//           vec.push_back('1');
//       }if(up==0){
//           vec.push_back('A');
//       }if(low==0){
//           vec.push_back('v');
//       }
//       int l= vec.size();
//       if(l<7){
//           for(int i=0;i<7-l;i++){
//               vec.push_back('s');
//           }
//       }
//       for(int i=0; i<x;i++){
//           cout << vec[i];
//       }
//       cout << endl;

//    }


    return 0;
}