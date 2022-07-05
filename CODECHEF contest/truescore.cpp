#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int team1,team2,team_1,team_2;
    cin >> team1  >>team2;
    cin >>team_1>>team_2;
    if(team_1>=team1 && team_2>=team2){
        cout << "POSSIBLE" << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
}
    return 0;
}