#include <stdio.h>
int main() {
    int arr[4]={10,20,30,40};
    int *p=arr;
    printf("%d", *(p+3));
    return 0;
}