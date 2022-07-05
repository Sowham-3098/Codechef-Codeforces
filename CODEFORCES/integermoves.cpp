#include<bits/stdc++.h>
using namespace std;
float distance(int x1, int y1, int x2, int y2)
{
    
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) * 1.0);
}
bool isInteger(double N)
{
 
    // Convert float value
    // of N to integer
    int X = N;
 
    double temp2 = N - X;
 
    // If N is not equivalent
    // to any integer
    if (temp2 > 0) {
        return false;
    }
    return true;
}
int main(){
long int t;
cin >> t;
while(t--){
    int x,y;
    cin >> x >> y;
    if(x==0 && y==0){
        cout << "0" << endl;
    }

   else  if(isInteger(distance(0,0,x,y)))
    {
        cout << "1" << endl;
    }
    else {
        cout << "2" << endl;
    }

}
    return 0;
}