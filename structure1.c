# include<stdio.h>
# include<stdlib.h>
struct subjrct{
    int phy,math,che;
    

}aman,lucky;

int main(){
    aman.phy=47;
    aman.che=58;
    aman.math=56;
    int totalmarks_aman;
    int percent;
totalmarks_aman= aman.phy+aman.che+aman.math;
percent=totalmarks_aman/300*100;

    lucky.phy=95;
    lucky.che=90;
    lucky.math=99;
    int totalmarks_lucky;
    totalmarks_lucky= lucky.phy+lucky.che+lucky.math;
    percent=totalmarks_lucky/300*100;

    printf("totalmarks_aman=%d",totalmarks_aman);
    printf("totalmarks_lucky=%d",totalmarks_lucky);

    // printf("the winner is%d ",percent);
    // printf("the winer is %d",percent);
    int amanper=totalmarks_aman*100/300;
    int luckyper=totalmarks_lucky*100/300;
    printf("\n Percentage of aman is %d%%\n",amanper);
    printf("\n Percentage of Lucky is %d%%\n",luckyper);
    if(amanper<luckyper){
        printf("Lucky tops the exam");
    }
    else if(amanper>luckyper){
        printf("Aman tops the exam");
    }
    else{
        printf("Both gots equal marks");
    }

return 0;
}