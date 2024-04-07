# include<stdio.h>
int main(){
int i,a[5];
printf("Enter the array element\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}

printf("the array are\n");
for(i=0;i<5;i++){
    printf("%d",a[i]);
}

int max;
max=a[0];
for(i=0;i<5;i++){
    if(a[i]>max){
        max=a[i];
    }
   
}
 printf("max element is %d\n",max);
    return 0;
}