# include<stdio.h>
int main(){
	int i,j,rows,k;
	printf("Enter the rows\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-1;j++){
			printf(" ");
			
		}
		for(k=1;k<=2*i-1;k++){
				printf("*");
			}
		printf("\n");
	}
	return 0;
}