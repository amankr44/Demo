# include<stdio.h>
int main(){
int i,j;
int even=4;

for(i=1;i<=5;i++){
    int odd=1;
    for(j=5;j>=i;j--){
        if(i%2!=0){
            printf("%d ",odd++);
        }
        else{
            
        }
    }
    printf("\n");
}
    return 0;
}