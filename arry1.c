# include<stdio.h>
int main(){
    int size;
    printf("Plese Enter the arry size\n");
    scanf("%d",&size);
int arry[size];
printf("Enter the elements of the array\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arry[i]);
    }
printf("\n The array elements are : \n");
    for(int i=0; i<size; i++){
        printf("%d ", arry[i]);
    }
    return 0;
}