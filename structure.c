#include<stdio.h>
#include<stdlib.h>
struct student{
    int age;
    int height;
};
int main(){
struct student aman;
struct student lucky;
aman.age=100;
aman.height=1000;

lucky.age=110;
lucky.height=503;

printf("Age of aman is %d",aman.age);



    return 0;
}