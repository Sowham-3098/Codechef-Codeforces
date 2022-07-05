#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
	// your code goes here
	int codechef;
	cin >> codechef;
	while(codechef--){
	    int r,c,path=0;
        cin >> r >> c;
        if(r<c){
           path=r+1;
           int ans=1 ,bns=1;
           for(int i=1;i<=r;i++){
              for(int j=1;j<=c;j++){
                cout << ans+bns*(j-1) << " ";
              }
              cout << endl;
              ans+=path;
              bns++;
           }
        }else{
            path=c+1;int pre=0;
           for(int i=1;i<=r;i++){
              for(int j=1;j<=c;j++){
                cout << pre+path*(j-1) << " ";
              }
              cout << endl;
              path++;
              pre++;
           }
        }
	}
	return 0;
}
