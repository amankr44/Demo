#include<stdio.h>
int main(){
    // wap to find  prime no. between two given inter
    for(int i=65; i<=97;i++){
        int flag=0;
        for(int j=2; j<i; j++){
                if(i%j==0){
                    flag++;
                   // break;
                }
           
        }
        printf("flag =%d\n",flag);
         if(flag>0){
                printf("%d is a not prime no",i);
            }
            else
               printf("%d is a prime no",i);

            printf("\n");
              printf("\n");  printf("\n");
    }
    return 0;
}