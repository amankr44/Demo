#include<stdio.h>
int main(){
    int size=5;
    int arr[size];

    printf("Enter the elements of the array\n");
    for(int i=0;i<5; i++){
        scanf("%d",&arr[i]);
    }

    printf("Here the element arre \n");
    for(int i=0;i<5; i++){
        printf("%d ",arr[i]);
    }
    int pos;
    printf("ENter the position you want to delete \n");
    scanf("%d",&pos);
    for(int i =pos-1; i<=size-1; i++){
        arr[i]=arr[i+1];
    }
    size--;

    printf("\nthe new array is \n");
    for(int i=0;i<size; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}