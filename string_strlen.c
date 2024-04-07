# include<stdio.h>
# include<string.h>
int main(){
    char str1[50]="coding";
    char str2[50]="age";
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<=len2;i++){
        str1[len1 +i]=str2[i];
    }
    puts(str1);
    return 0;
}