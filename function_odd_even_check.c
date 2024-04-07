# include<stdio.h>
void even(void);
void even(){
	for(int i=1;i<=10;i++){
		if(i%2==0){
			printf("%d si even number",i);
		}
		else{
			printf("%d is odd",i);
		
		}
		printf("\n");
	}
	
}
	int main(){
		even();
		return 0;
	}