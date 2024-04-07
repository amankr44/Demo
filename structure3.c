// array of structure
# include<stdio.h>
# include<stdlib.h>
struct student{
	int rollno;
	char name[20];
	float marks;
};

int main(){
	struct student s[3];
    printf("Please enter the student data in the same manner\n");
	for(int i=0;i<3;i++){
		scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);
	}
    printf("\n The output begins here\n");
	for(int i=0;i<3;i++){
		printf("roll no. :%d\n  Name:%s\n Marks:%f\n",s[i].rollno,s[i].name,s[i].marks);
        printf("\n");
	}
    return 0;
}