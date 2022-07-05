#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, c, b, ct, bt;
        cin >> N >> b >> c;
        int p=10005;
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                int total=100*j+4*i;
                if(total>=N){
                    p=min(p,i*c+j*b);
                }
            }
        }
        cout<<p<<endl;
       
    }
    return 0;
}