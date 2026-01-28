#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);

    int a;
    scanf("%d",&a);
    
    switch (type)
    {
    case 1:
        if(a==11 || a==12){
            int cashback=20;
            int cash= 199-cashback;
            printf("%d",cash);
        }else if(a==13){
            int cash= 199;
            printf("%d",cash);
        }
        break;
    case 2:
        if(a==11 || a==12){
            int cashback=20;
            int cash= 399-cashback;
            printf("Pay %d",cash);
        }else if(a==13){
            int cash= 399;
            printf("Pay %d",cash);
        }else{
            printf("Pay 199");
        }
        break;
    default:
        printf("Invalid input");
        break;
    }
}