/*
#include<stdio.h>
int sum (int,int);
int main(){
    int a=6;
    int b =5;
  int c=  sum(a=100,b =500);
  printf("%d",c);

    return 0;
}
int sum (int x, int y){
return x+y;
}
*/

# include<stdio.h>
int swap(int,int);
int main(){
    int a=5;
    int b=4;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    return 0;
}