# include<stdio.h>
void sum(float,float);
void main(){
    float x,y;
    printf("Enter x and y\n");
    scanf("%f%f",&x,&y);
    sum(x,y);
}

void sum(float a,float b){
    printf("sum=%f",a+b);
}
