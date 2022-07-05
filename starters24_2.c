#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d %d", &x,&y);


        int f=x-y;
        if(x==y){
            printf("%d",y*2+f-1); 
        }else{
            printf("%d",y*2+f);
        }
        
    }
    return 0;
}