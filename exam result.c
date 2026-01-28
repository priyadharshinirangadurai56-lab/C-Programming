#include<stdio.h>
int main(){
    
    int attendence;
    scanf("%d",&attendence);
    int mark;
    scanf("%d",&mark);


    if(attendence>=75){
        if(mark >=75){
            printf("Distinction");
        }else if(mark>=50 && mark<=74){
            printf("Pass");
        }
        else{
            printf("Fail");
        }
    }else{
        printf("Attendence Fail");
    }
    return 0;
}