#include<stdio.h>
void main(){
    int num;
     printf("Enter the num\n");
     scanf("%d",&num);
     int count=0;
     int i=2;
     while(i<num){
            if(num%i==0){
            count++;                
            }
            i++;
     }


     if(count==0){
        printf("%d is prime no.",num);
     }
     else
             printf("%d is not prime no.",num);
     

//return 0;
}