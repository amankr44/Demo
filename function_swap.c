# include<stdio.h>
void swap()
{
	int n=5;
	int m=7;
	printf("Value of n is %d and m is %d before swapping\n",n,m);
		int temp=n;
		n=m;
		m=temp;
	printf("Value of n is %d and m is %d after swapping",n,m);
		
	
	}

void main(){
    swap();
}