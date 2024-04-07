# include<stdio.h>
int main(){
int i,sum=0;
int a[5];
printf("Enter the array Element\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
printf("the sum of array are:\n");
for(i=0;i<5;i++){
    sum=sum+a[i];
}
printf("%d",sum);
    return 0;
}