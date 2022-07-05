#include <iostream>
using namespace std;
int main()
{
   long long  int n, even, odd;

    cin >> n;

    even = n * (n + 1);
    odd = n * n;
    cout << odd <<" " << even<< endl;
    

    return 0;
}