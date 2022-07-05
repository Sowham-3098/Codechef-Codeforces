#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        long long int a ;
        int x=0,y=0,z=0;
        cin >> a;
        char arr[14] ;
        for(int i=0; i<14; i++){
            cin >> arr[i] ;
        }
     for(int j=0; j<14; j++){
          if (arr[j]=='C'){
              x++;}
              else if (arr[j]=='N'){
                  y++;
              }
          
          else if(arr[j]=='D'){
              z++;
          }
          }

        if((2*x+z)==(2*y+z)){
            cout << 55*a << endl;
        }  else if((2*x+z)>(2*y+z)){
            cout << 60*a << endl;
        }else if((2*y+z)>(2*x+z)){
            cout << 40*a << endl;
        }
     
    }
    return 0;
}