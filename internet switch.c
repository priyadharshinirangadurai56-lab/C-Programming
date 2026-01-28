#include<stdio.h>
int main(){

    int type;
    scanf("%d",&type);
    int exp;
    scanf("%d",&exp);
    
    switch (type)
    {
    case 1:
        if(exp>=3){
            int d=exp*5000;
            int bonus = 50000+d;
            printf("%d",bonus);
        }else{
            printf("50000");
        }
        break;
    case 2:
        if(exp>=3){
            int e= exp*5000;
            int bonus = 35000+ e;
            printf("%d",bonus);
        }else{
            printf("35000");
        }
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}