#include<stdio.h>

int main(){
    int s,b;
    scanf("%d", &s);

    if(s %4==0){
      printf("%d",s+1);
    }
else{
    printf("%d",s-1);
}
    
    
    return 0;
}