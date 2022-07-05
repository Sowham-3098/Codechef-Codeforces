#include <bits/stdc++.h>
#define int long long int
using namespace std;
signed main()
{
    int ChaliyeJao;
    cin >> ChaliyeJao;
    while (ChaliyeJao--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 2 && m == 2)
        {
            cout << "0 1" << endl;
            cout << "1 0" << endl;
        }
        else
        {

            for (int i = 0; i < n / 2; i++)
            {
                if (i % 2 == 0)
                {

                    for (int j = 0; j < m / 2; j++)
                    {
                        if (j % 2 == 0)
                        {
                            cout << "1"
                                 << " "
                                 << "0"
                                 << " ";
                        }
                        else
                        {
                            cout << "0"
                                 << " "
                                 << "1"
                                 << " ";
                        }
                    }
                    cout << endl;
                    for (int j = 0; j < m / 2; j++)
                    {
                        if (j % 2 == 0)
                        {
                            cout << "0"
                                 << " "
                                 << "1"
                                 << " ";
                        }
                        else
                        {
                            cout << "1"
                                 << " "
                                 << "0"
                                 << " ";
                        }
                    }
                    cout << endl;
                
            }else{
                for (int j = 0; j < m / 2; j++)
                    { if (j % 2 == 0)
                        {
                            cout << "0"
                                 << " "
                                 << "1"
                                 << " ";
                        }
                        else
                        {
                            cout << "1"
                                 << " "
                                 << "0"
                                 << " ";
                        }
                    }
                    cout << endl;
                    for (int j = 0; j < m / 2; j++)
                    {
                       if (j % 2 == 0)
                        {
                            cout << "1"
                                 << " "
                                 << "0"
                                 << " ";
                        }
                        else
                        {
                            cout << "0"
                                 << " "
                                 << "1"
                                 << " ";
                        }
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
// for(int i=0;i<n/4;i++){
//
//         for(int j=0;j<m;j++){
//              if(j%2==0){
//                 cout <<"1"<<" ";
//              }else{
//                 cout <<"0" <<" ";
//              }
//         }
//         cout << endl;
//         for(int j=0;j<m/2;j++){
//             if(j%2==0){
//                 cout <<"0"<<" "<<"0"<<" ";
//              }else{
//                 cout <<"1" <<" "<<"1"<<" ";
//              }
//         }
//         cout << endl;
//
//            for(int j=0;j<m/2;j++){
//              if(j%2==0){
//                 cout <<"1"<<" "<<"1"<<" ";
//              }else{
//                 cout <<"0" <<" "<<"0"<<" ";
//              }
//         }
//         cout << endl;
//         for(int j=0;j<m;j++){
//             if(j%2==0){
//                 cout <<"0"<<" ";
//              }else{
//                 cout <<"1" <<" ";
//              }
//         }
//         cout << endl;
//
//     }
//