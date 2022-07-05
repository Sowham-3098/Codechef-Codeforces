#include<stdio.h>

int main(){
    char s[100], t;
    int a,b;
    printf("enter string:\n");
    gets(s);
     
     printf("enter the indexes:\n");
     scanf("%d %d", &a, &b);

     t=s[a-1];
     s[a-1]=s[b-1];
     s[b-1]=t;
     
     printf("New string: %s\n",s);


    return 0;
}