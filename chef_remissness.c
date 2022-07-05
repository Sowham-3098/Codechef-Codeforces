#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int s,b;
        scanf("%d %d",&s,&b);

     if(s<=b){
         printf("%d",b);
         printf(" ");
         printf("%d",b+s);

     }
     else{
         printf("%d",s);
         printf(" ");
         printf("%d",b+s);}

     }
    return 0;
}