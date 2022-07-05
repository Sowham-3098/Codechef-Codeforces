#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,p,q,r;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&p, &q, &r);
	    int d=(p+q+r)/2;
	    if((p+b+c)>d||(q+a+c)>d||(r+a+b)>d){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	  
	}
	return 0;
}
