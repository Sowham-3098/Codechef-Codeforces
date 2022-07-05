#include <iostream>
using namespace std;

int main() {
	long int n;
	cin>>n;
	long int s1=0,s2=0;
	if(n>0)
	{
	for(int i=1;i<=2*n;i++)
	{
	    if(i%2 == 0)
	    {
	        s1 = s1 + i;
	    }
	   
	}
		for(int i=1;i<=2*n;i++)
	{
	    if(i%2 != 0)
	    {
	        s2 = s2 + i;
	    }
	}
	}
	cout<<s2<<" "<<s1;
	return 0;
}
