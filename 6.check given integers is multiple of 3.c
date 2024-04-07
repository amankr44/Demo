# include<stdio.h>
int main(){
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    if (a%3==0){
        printf("%d is multiple of 3",a);
    }
    else{
        printf("%d is not multiple of 3",a);
    }
    return 0;
}