#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin >> t;
while(t--){
    int r,c;
    cin >> r >> c;
    string ins;
    cin >> ins;
    int n=ins.length();
    int right=1,left=1,up=1,down=1,ans=0;
    for(int i=0;i<n;i++){
        if(ins[i]=='R'){
            right++;
            
        //    if(right>c){
        //         if(right-left>c){
        //              ans++;
        //         }else{
        //             left=left-(c-right);
        //         }
        //     }
        }else if(ins[i]=='L'){
           left++; 
        //    if(left>c){
        //        if(left-right>c){
        //            ans++;
        //        }else{
        //            right=right-(c-left);
        //        }
        //    }
        }else if(ins[i]=='U'){
           up++;
        //    if(up>r){
        //        if(up-down>c){
        //             ans++;
        //        }else{
        //            down=down-(c-up);
        //        }
        //    }

        }else if(ins[i]=='D'){
           down++;
        //    if(down>r){
        //        if(down-up>r){
        //             ans++;
        //        }else{
        //            up=up-(c-down);
        //        }
        //    } 
        }

    }
    if(right==1){
        if(left>c){
            cout << "unsafe" << endl;
        }
    }else if(left==1){
        if(right >c){
            cout << "unsafe" << endl;
        }
    }else if(right!=1 && left!=1){
        if(left>right){
            if((left-right)>c){
                cout << "unsafe" << endl;
            }
        }else if(right >left){
            if((right-left) >c){
                cout << "unsafe" << endl;
            }
        }
    }else{
          ans++;
    }
if(up==1){
        if(down>r){
            cout << "unsafe" << endl;
        }
    }else if(down==1){
        if(up >r){
            cout << "unsafe" << endl;
        }
    }else if(up!=1 && down!=1){
        if(down>up){
            if((down-up)>r){
                cout << "unsafe" << endl;
            }
        }else if(up >down){
            if((up-down) >r){
                cout << "unsafe" << endl;
            }
        }
    }else{
          ans++;
    }

    if(ans==2){
        cout << "safe" << endl;
    }

}
    return 0;
}