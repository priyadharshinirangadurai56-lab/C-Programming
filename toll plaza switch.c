#include<stdio.h>
int main(){
    int vehicle,pay;
    scanf("%d",&vehicle);

    int trip;
    scanf("%d",&trip);

    switch (vehicle)
    {
    case 1:
        if(trip==1){
            printf("100");
        }else if(trip>=2 && trip<=10){
            printf("800");
            break;
        }else{
            printf("800");
        }
        break;
    case 2:
        pay=trip*240;
        printf("%d",pay);
        break;
    
    default:
        printf("invlaid input");
        break;
    }
    
}