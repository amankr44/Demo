# include<stdio.h>
int main(){
int i,j;
//int sum;
int a1[3][3];
int a2[3][3];
int sum[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a1[i][j]);
    }
}

    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a1[i][j]);
    }
    
    printf("\n");

    }
    printf("Enter 2nd array\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a2[i][j]);
    }
    }
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a2[i][j]);
    }
    printf("\n");
    }


    printf("Sum of the matrix is \n");
     for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ",a1[i][j]+a2[i][j]);
    }
    printf("\n");
    }
    
    return 0;
    
}