# include<stdio.h>
//# include<string.h>
int main(){
    char a[50];
    char b[20];
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        b[i]=a[i];

    }

    printf("%s",b);
  // puts(b);
return 0;
}