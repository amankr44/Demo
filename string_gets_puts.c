/*
# include<stdio.h>
int main(){
char name[5];
gets(name);
printf("string is :\n");
puts(name);
    return 0;
}
*/

# include<stdio.h>
int main(){
char name[5];
scanf("%s",name);
printf("%s",name);
    return 0;
}