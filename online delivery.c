#include<stdio.h>
int main(){ 
    int amount;
    scanf("%d",&amount);
    int speed;
    scanf("%d",&speed);


    switch (speed)
    {
    case 1:
        printf("Delivery 50");
        break;
    case 2:
        if(amount<1000){
            printf("Delivery 100");
        }else{
            printf("Free");
        }
        break;
        
    default:
    printf("Invalid input");
        break;
    }
    return 0;

}
