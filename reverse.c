#include<stdio.h>
int main (){
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    int rev=0;
    int rem;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("%d", rev);
    return 0;
}