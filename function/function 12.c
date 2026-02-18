#include <stdio.h>
int isLeap(int year) {
    if ((year % 400 == 0) 
        return 1;   
    else
        return 0;   
}
int main() {
    int year;
    scanf("%d", &year);
    if (isLeap(year))
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    return 0;
}
