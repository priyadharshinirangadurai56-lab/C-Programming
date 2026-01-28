#include<stdio.h>
int main(){
    int loantype;
    scanf("%d",&loantype);

    int creditscore;
    scanf("%d",&creditscore);
    switch (loantype)
    {
    case 1:
        if(creditscore>=650 && creditscore<=699){
            printf("Manual Review");
        }else{
            printf("Approved");
        }
        break;
    
    case 2:
        if(creditscore<700){
            printf("Rejected");
        }else{
            printf("Approved");
        }

        break;
    default:
        break;
    }

}