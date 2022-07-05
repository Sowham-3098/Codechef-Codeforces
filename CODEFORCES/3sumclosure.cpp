#include <bits/stdc++.h>
#define int long long int

using namespace std;
signed main()
{
    int ChaliyeJao;
    cin >> ChaliyeJao;
    while (ChaliyeJao--)
    {
        int n;
        cin >> n;
        int A[n];
       map<int,int>M;
	for(int &a:A)cin>>a,M[a]++;
	vector<int>v;
	for(auto i:M){
		int cnt = min(3ll,i.second);
		while(cnt--)v.push_back(i.first);
	}
	n = v.size();
	bool ok = 1;
	if(n>15)ok = 0;
	else
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++){
				if(!M[v[i]+v[j]+v[k]])ok = 0;
			}
	cout << (ok?"YES":"NO");
	cout << endl;
    }
    return 0;
}