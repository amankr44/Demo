# include<stdio.h>
void table(int);
int main(){
    int num;
    printf("Enter the table number\n");
    scanf("%d",&num);
    table(num);
    printf("\n");
}

void table(int num){
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",num,i,num*i);
    }
}