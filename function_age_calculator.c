# include<stdio.h>
int main(){
int birthday,birthmonth,birthyear,currentday,currentmonth,currentyear,r1,r2,r3;
printf("Age Calculator:-\n");
printf("Enter the birth day\n");
scanf("%d",&birthday);
printf("Enter the birth month\n");
scanf("%d",&birthmonth);
printf("Enter the birth year\n");
scanf("%d",&birthyear);

printf("Enter the current day\n");
scanf("%d",&currentday);
printf("Enter the current month\n");
scanf("%d",&currentmonth);
printf("Enter the current year\n");
scanf("%d",&currentyear);

if((birthday>31||birthday<1)&&(currentday>31||currentday<1)&&(birthmonth<1||birthmonth>12)&&(currentmonth<1||currentmonth>12)&&(birthyear<0&&currentyear<0)){
  printf("Try again");
}
else{
    r3=currentyear-birthyear;
    if(currentday>=birthday){
        r1=currentday-birthday;
    }
    else{
        currentmonth=currentmonth-1;
        currentday=currentday+30;
        r1=currentday-birthday;
    }

    if(currentmonth>=birthmonth){
        r2=currentmonth-birthmonth;
    }
    else{
        currentyear=currentyear-1;
        currentmonth=currentmonth+12;
        r2=currentmonth-birthmonth;
    }
}

printf("your age is %d day %d month %d year",r1,r2,r3);
}