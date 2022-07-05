#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        string sowham;
        cin >> sowham;
        string bhuin;
        bhuin = sowham;
        sort(bhuin.begin(), bhuin.end());
        reverse(bhuin.begin(), bhuin.end());

        int x = 0,y=1;
        for (int i = 0; i < sowham.length(); i++)
        {
            if (sowham[i] == sowham[i + 1])
            {
                x++;
            }
        }
        cout << "Case #" << k << ":"
             << " ";
        if (x == sowham.length())
        {
            cout << sowham << endl;
        }
        else if (sowham == bhuin)
        {
            cout << sowham << endl;
        }
        else
        {
            for (int i = 0; i < sowham.size(); i++)
            {
                // if (sowham[i] < sowham[i + 1])
                // {
                //     cout << sowham[i] << sowham[i];
                // }
                // else if (sowham[i] == sowham[i + 1] )
                // {
                //    for(int j=2;j<sowham.length();j++){
                //        if(sowham[i+(j-1)]==sowham[i+j]){
                //                 y++;
                //        }else{break;}

                //    }
                //    if(sowham[i+y]<sowham[i]){
                //    for(int j=0;j<y;j++){
                //        cout << sowham[i];
                //    }
                //    }else{
                //      for(int j=0;j<y;j++){
                //        cout << sowham[i] << sowham[i];
                //    }  
                //    }
                // }
                // else if (sowham[i] == sowham[i + 1] && sowham[i + 1] < sowham[i + 2])
                // {
                //     cout << sowham[i] << sowham[i];
                // }
                // else
                // {
                //     cout << sowham[i];
                // }
                for(int j=i+1;j<sowham.length();j++){
                    if(sowham[i]==sowham[j]){
                        y++;
                    }else{
                        break;
                    }
                }
                if(sowham[i]<sowham[i+y]){
                    for(int a=0;a<y;a++){
                        cout << sowham[i] << sowham[i];
                    }
                }else{
                    for(int a=0;a<y;a++){
                        cout << sowham[i] ;
                    }
                }i+=y-1;
                y=1;

            }
            cout << endl;
        }
    }
    return 0;
}