#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("Enter a num\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf("The sum of all even no from 1 to %d is %d",n,sum);
    return 0;
}