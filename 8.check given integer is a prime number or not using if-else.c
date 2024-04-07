# include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a%a==0 && a%1==0){
        printf("%d is prime number",a);
    }
    else{
        printf("%d is not prime number");
    }

    return 0;
}