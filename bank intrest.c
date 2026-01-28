#include<stdio.h>
int main(){
    int account_type;
    scanf("%d",&account_type);

    int years;
    scanf("%d",&years);

    switch (account_type)
    {
    case 1:
        printf("Intrest 4%");
        break;
    case 2:
        if(years<=3){
            printf("Interest 5 % ");
        }else{
            printf("Intrest 7%");
        }
        break;
    default:
        break;
    }
}