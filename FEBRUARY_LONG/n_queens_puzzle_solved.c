#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int x,z;
        scanf("%d",&x);
        float w,y;
        w= 0.143*x;
        y= pow(w,x);
     z=floor(y);

     if(y-z<0.5){
         printf("%d",z);
     }else{
         printf("%d",z+1);
     }

    
    }
    return 0;
}