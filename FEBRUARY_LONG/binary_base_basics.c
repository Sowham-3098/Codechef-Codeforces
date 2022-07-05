#include<stdio.h>
#include <string.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,z=0;
        scanf("%d %d",&n,&k);
        char s[100];
        scanf("%s",&s);
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1])
            {
                z+=1;
            }
        }
        if(k>=z){
            if((k-z)%2==0)
            printf("YES");
            else if(n%2!=0)
           printf("YES");
            else
            printf("NO");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}