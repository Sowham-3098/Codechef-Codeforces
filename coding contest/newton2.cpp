#include<bits/stdc++.h>
using namespace std;
int main(){

int size;
string str;
cin >> size >> str;

int N=0,T=0;
for(int i=0;i<size;i++) {
    if(str[i]=='N'){
        N++;
    }else if(str[i]=='T'){
        T++;
    }
    
}
if(N>T){
    cout << "Nutan" << endl;
}else{
    cout <<"Tusla" << endl;
}
    return 0;
}