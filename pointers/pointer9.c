#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int *p = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    int x;
    scanf("%d", &x);
    int pos = -1;
        for (int i = 0; i < n; i++) {
        if (*(p + i) == x) {
            pos = i + 1;   
            break;
        }
    }

    printf("%d", pos);
    return 0;
}