
#include<stdio.h>

int main(){
    char ch[100];
    FILE *fp;
    fp=fopen("omg.txt","w");
    
    printf("Enter an input :");
    scanf("%s",&ch);
    fprintf(fp,"%s",ch);fclose(fp);
}