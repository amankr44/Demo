# include<stdio.h>
# include<string.h>
int main(){
    char str1[50]="coding";
    char str2[50]="codingage";
    char str3[50]="code";
    int flag=0;
    for(int i=0;(str1[1]!='\0'|| str2[i]!='\0');i++){
    if(str2[i]!=str1[i]){
        flag=1;
        break;
    }
}

if(flag==0){
    printf("string is equal");
}
else{
    printf("string is not equal");
    return 0;
}
}
