#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	    int n;
		cin >> n;
		int arr[2*n];
		for(int i=0;i<2*n;i++){
			cin >> arr[i]; 
		}
		int a=0,b=0;
		for(int i=0;i<2*n;i++){
			if(arr[i]%2==0){
				a+=1;
			}else{
				b+=1;
			}
		}
		if(a==2*n){
			cout << "YES" << endl;
		}else if(b==2*n){
			cout << "YES" << endl;
		}else if(a==b){
			cout << "NO" << endl;
		}else{
			cout << "NO" << endl;
		}
	 

	return 0;
}
