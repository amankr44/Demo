# include<stdio.h>
# include<stdlib.h>
struct market{
    int productcode;
    int prize;
    int quantity;
};

int main(){
    struct market campus,nike,action;
    campus.productcode=101;
    campus.prize=999;
    campus.quantity=99;

    printf("the productcode is %d\n",campus.productcode);
    printf("prize=%d\n",campus.prize);
    printf("quantity=%d\n", campus.quantity);


    nike.productcode=1000;
    nike.prize=9999;
    nike.quantity=10;
    printf("the productcode is %d\n",nike.productcode);
    printf("prize=%d\n",nike.prize);
    printf("quantity=%d\n", nike.quantity);

}