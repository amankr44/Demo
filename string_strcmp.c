# include<stdio.h>
# include<string.h>
int main(){
    char str1[50]="coding";
    char str2[50]="codingage";
    char str3[50]="code";
    int collect=strcmp(str3,str2);
    printf("%d",collect);
    return 0;
}