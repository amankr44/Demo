# include<stdio.h>
int main(){
	int i,j;
	int n=5;
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++){
			printf("%d",n-i);
		}
		printf("\n");
	}
	return 0;
}