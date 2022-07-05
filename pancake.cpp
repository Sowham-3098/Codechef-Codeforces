#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t;
cin >> t;
for(long long int i=1; i<=t; i++){
    long long int num;
    cin >> num;
    list<long long int> ball;
    long long int count=0,cnt=0;
    for(long long int i=0; i<num; i++){
        long long int xo; cin >> xo;
       ball.push_back(xo);
    }
     while(!ball.empty()){
        if(ball.front()<ball.back()){
            count = max(count, ball.front());
            if(count<=ball.front()) cnt++;
            ball.pop_front();
        }
        else{
            count = max(count, ball.back());
            if(count<=ball.back()) cnt++;
            ball.pop_back();
        }
    } cout <<"Case #"<<i <<": "<< cnt << endl;
}
    return 0;
}