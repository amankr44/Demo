# include<stdio.h>
int main(){
int a;
printf("Enter the 1st number\n");
scanf("%d",&a);
int b;
printf("Enter the 2nd number\n");
scanf("%d",&b);
if (a>b){
    printf("%d is maximum",a);
}
else if (a<b){
    printf("%d is maximum",b);
}
else{
    printf("both number are equal");
}
    return 0;
}