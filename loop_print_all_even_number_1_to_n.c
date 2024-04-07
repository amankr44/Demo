# include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2){
			sum+=i;
		}
			printf("sum of all even number 1 to %d is %d\n",n,sum);
	return 0;
}