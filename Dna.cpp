#include <bits/stdc++.h>
#define int long long int

using namespace std;

signed main() {
    int test;
    cin >> test;
    while(test--){
       // your code goes here 
       int n;
       cin >> n;
       string dna;
       cin >> dna;

       for(int i=0;i<dna.size();i+=2)
{
     if(dna[i]=='0' && dna[i+1]=='0'){
        cout << "A";
     }else if(dna[i]=='1' && dna[i+1]=='0'){
        cout << "C";

     }else if(dna[i]=='0' && dna[i+1]=='1'){
        cout << "T";
     }else if(dna[i]=='1' && dna[i+1]=='1'){
        cout << "G";
     }
    
}
cout << endl;
    }
	
	return 0;
}