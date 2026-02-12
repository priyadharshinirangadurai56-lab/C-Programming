#include <stdio.h>
void swap(int a, int b) {
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping %d %d\n", a,b);
}
    int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("before swap %d %d\n", a,b);
    swap(a,b);
    return 0;
}