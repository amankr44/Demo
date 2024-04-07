# include<stdio.h>
int main(){
char c;
printf("plz Enter the character\n");
scanf("%c",&c);
switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("%c is vowel",c);
    break;
    default:
    printf("%c is constant",c);

}
    return 0;
}