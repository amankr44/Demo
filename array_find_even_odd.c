# include<stdio.h>
int main(){
	int i,a[10];
	int even=0,odd=0;
	printf("Enter the element of the array\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("the even element are=%d\n",even);
		printf("the odd element are=%d\n",odd);
	return 0;
}