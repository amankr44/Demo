# include<stdio.h>
int main(){
	int i,size,pos;
	printf("Enter the arr size\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter the arr element\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("the arr element are\n");
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
	printf("Enter the pos u want to delete\n");
	scanf("%d",&pos);
	
	for(i=pos-1;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
	printf("the new arr are\n");
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}

