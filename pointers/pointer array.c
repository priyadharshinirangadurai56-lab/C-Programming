#include <stdio.h>
int main() {
    int arr[5]={98,94,42,71,14};
    int *p=arr;
    int length=sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<length; i++) {
        printf("%d\n", *(p+i));
    }
    return 0;
}