// #include<stdio.h>
// int main(){
//     for(int i=1; i<=5; i++){
//         for(int j=1;j<=i;j++){
//             if(i+j<=5){
//                 printf(" ");
//             }
//             else
//                printf("*");

//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    for(int i =5; i>0; i--){
        for(int j=1; j<=5; j++){
            if(j>=i){
                printf("*");
            }
            else
            printf(" ");
        }
        for(int k =5; k>i; k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}