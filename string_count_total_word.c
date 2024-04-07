# include<stdio.h>
# include<string.h>
int main(){
    char name[50];
    fgets(name,50,stdin);
    int word=0;
    for(int i=0;name[i]!='\0';i++){
        if (name[i]==' '){
            word++;
        }
    }
    printf("the total word=%d",word+1);

    return 0;
}