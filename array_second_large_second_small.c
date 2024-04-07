# include<stdio.h>
int main(){
int i,size;

printf("Enter the array size\n");
scanf("%d",&size);
int a[size];

printf("Enter the array element\n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}

printf("array element are\n");
for(i=0;i<size;i++){
    printf("%d",a[i]);
}
printf("shorting array are\n");

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        if(a[i]<=a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}

    for(i=0;i<size;i++){
    printf("%d ",a[i]);

}
int n;
printf("\n Enter the kth largest element you want to find\n");
scanf("%d",&n);
printf("%d",a[n-1]);


    return 0;
}