# include<stdio.h>
int main(){
    int sum=0;
int arr[5];
    printf("Enter the elements of the array\n");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("\n The array elements are : \n");
    for(int i=0; i<5; i++){
      //  printf("%d ", arr[i]);
      sum+= arr[i];
    }
    printf("%d the sum of the elements of the array",sum);
    return 0;
}