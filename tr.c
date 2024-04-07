#include<stdio.h>
int main(){
    int num;
    int sum=0;
    float avg;
    printf("Enter ten numbers\n");
    for(int i=1;i<=10;i++){
        printf("Enter number %d: ", i);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
        sum = sum + num;
    }
    printf("sum is %d\n", sum);
    avg = (float)sum / 10;
    printf("avg is %f\n", avg);
    return 0;
}