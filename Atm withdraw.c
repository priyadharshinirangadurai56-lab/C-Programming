#include <stdio.h>
int main()
{
int accountType, balance, withdrawAmount;
scanf("%d", &accountType);
scanf("%d", &balance);
scanf("%d", &withdrawAmount);
switch (accountType)
{
case 1:  
if (balance >= withdrawAmount)
printf("Transaction Successfull");
else
printf("Insufficient Balance");
break;
case 2:   
if (withdrawAmount > 5000)
printf("Limit Exceeded");
else if (balance >= withdrawAmount)
printf("Transaction Successfull");
else
printf("Insufficient Balance");
break;
default:
printf("Invalid Account Type");
}
return 0;
}