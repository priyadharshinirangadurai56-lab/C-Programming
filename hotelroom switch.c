#include<stdio.h>
int main(){
    
    
    int roomtype;
    scanf("%d",&roomtype);

    char ch;
    printf("%c",&ch);

    switch (roomtype)
    {
    case 1:
       if(ch=='A'){
         printf("2500");
         break;
       }else if(ch=='B'){
        printf("2000");
        break;
       }
        break;
    case 2:
       if(ch=='C'){
        printf(" 4000");
        break;
       }else if(ch =='D'){
        printf("3000");
        break;
       }
    default:
        printf("invalid input");
        break;
    }

}