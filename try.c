# include<stdio.h>
int main(){
int i,j,k;
int x=1;
for(i=1;i<=5;i++){
	for(j=5;j>=i;j--){
		printf(" ");
	}
	for(k=1;k<=2*i-1;k++){
		printf("%d ",x);
		x++;
	}
	printf("\n");
}
	return 0;
}