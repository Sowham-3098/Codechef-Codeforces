//Write a program to find the remainder when an integer A is divided by an integer B.
#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b,c;
        scanf("%d  %d", &a, &b);
        c= a%b;
        printf("%d\n",c);
    }
    return 0;
}