# include<stdio.h>
int main(){
    int a;
    printf("Enter the 1st number\n");
    scanf("%d",&a);
    int b;
    printf("Enter the 2nd number\n");
    scanf("%d",&b);
    int c;
    c=a<b?a:b;
    printf("%d is minimum",c);
    return 0;
}