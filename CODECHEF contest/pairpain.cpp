// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t;
// cin >> t;
// while(t--){
// long long int n;
// cin >> n;
// long long int sb[n];
// for(long long int i=0; i<n; i++){
//     cin >> sb[i];
// }
// long long int permut=0;
// for(long long int i=0; i<n; i++){
//     for(long long int j=i+1; j<n; j++){
//         if(sb[i]+sb[j]>=sb[i]*sb[j]){
//             permut++;
//         }
//     }
// }
// cout << permut << endl;
#include <bits/stdc++.h>
using namespace std;
long int pain(long int n)
{
    if (n < 2)
        return 0;
    long int k = (n * (n - 1)) / 2;
    return k;
}
int main()
{
    int t;
    
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int sbhuin[n], one = 0, two = 0, other = 0;
        for (long int i = 0; i < n; i++)
        {
            cin >> sbhuin[i];
            if (sbhuin[i] == 1)
                one++;
            if (sbhuin[i] == 2)
                two++;
            if (sbhuin[i] != 1)
                other++;
        }
        if (one == 0 && two <=1)
        {
            cout << "0" << endl;
        }
        else if (one == 1 && two <= 1)
        {
            cout << other << endl;
        }
        else if (one > 0 && two <= 1)
        {
            cout << pain(one) + other*one << endl;
        }
        else if (one == 0 && two > 1)
        {
            cout << pain(two) << endl;
        }
        else if (one == 1 && two > 1)
        {
            cout << pain(two) + other << endl;
        }
        else if (one > 1 && two > 1)
        {
            cout << pain(one) + pain(two) + other*one << endl;
        }
    }

    return 0;
}