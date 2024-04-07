// Q.6 array insertion
# include<stdio.h>
int main(){
	int i,a[10],size,num,pos;
	printf("Enter the array size\n");
	scanf("%d",&size);
	printf("Enter the array element\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	
	printf("the array element are:\n");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	
	printf("\nEnter the element you want insert\n");
	scanf("%d",&num);
	
	printf("Enter the postion\n");
	scanf("%d",&pos);
	for(i=size-1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=num;
	size++;
	printf("the new array is:\n");
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	return 0;
}