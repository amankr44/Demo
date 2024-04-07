/*
// no returntype no argument
# include<stdio.h>
void factorial(){
	int i,num,fact=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	for (i=1;i<=num;i++){
		fact=fact*i;
	}
	printf("factorial of %d is %d\n",num,fact);
}
int main(){
    factorial();
}
*/

// returntype with argument
/*
# include<stdio.h>
int fact(int);


int main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
int collect=fact(n);
printf("factorial of %d is %d\n",n,collect);
return 0;
}

int fact(int a){
int mul=1;
for(int i=1;i<=a;i++){
	mul*=i;
}
return mul;
}
*/

// no returntype with argument

# include<stdio.h>
void fact(int);
void main(){
	int n,fac=1;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	fact(n);
}

void fact(int a){
	int fac=1;
	for(int i=1;i<=a;i++){
		fac*=i;
	}
		printf("factorial of %d is %d\n",a,fac);
	}
