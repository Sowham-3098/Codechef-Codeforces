#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    long long int questions,marks;
    cin >> questions >> marks;
    long long int a=0,b=0,c=0;
    if(marks%3==0){
        a+=marks/3;
    }else if(marks%3==1){
        a+=(marks/3)+1;
        b+=2;
    }else if(marks%3==2){
        a+=(marks/3)+1;
        b++;
    }

    if(a+b==questions){
        cout << "Yes" << endl;
        cout << a << " "<< b << " "<< "0"<< endl;
    }else if(a+b<questions){
        cout << "Yes" << endl;
        cout << a << " " << b << " " << questions-a-b << endl;
    }else{
        cout << "No" << endl;
    }
} 
    return 0;
} 