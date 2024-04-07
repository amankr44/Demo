# include<stdio.h>
int main(){
int currentday,currentmonth,currentyear,birthday,birthmonth,birthyear,r1,r2,r3;
printf(".........age calculator........\n");
printf(".................................");
printf("Enter the currentday\n");
scanf("%d",&currentday);
printf("Enter the currentmonth\n");
scanf("%d",&currentmonth);
printf("Enter the currentyear\n");
scanf("%d",&currentyear);

printf("Enter the birthday\n");
scanf("%d",&birthday);
printf("Enter the birthmonth\n");
scanf("%d",&birthmonth);
printf("Enter the birthyear\n");
scanf("%d",&birthyear);

if((currentday<0||currentday>31)&&(birthday<0||birthday>31)&&(currentmonth<0||currentmonth>12)&&(birthmonth<0||birthmonth>12)&&(currentyear<0&&birthyear<0)){
    printf("try again");
}
else{
    r3=currentyear-birthyear;
}
if(currentday>birthday){
    r1=currentday-birthday;
}
else{
    currentmonth=currentmonth-1;
    currentday=currentday+30;
    r1=currentday-birthday;
}
    return 0;
}