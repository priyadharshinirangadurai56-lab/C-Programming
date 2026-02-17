#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int *p = arr;
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    int *start = arr;
    int *end = arr + n - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    p = arr;
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}