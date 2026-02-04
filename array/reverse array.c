#include <stdio.h>
int main() {
    int n, i;
    int stops[100];
    int start, end, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &stops[i]);
    }
    start = 0;
    end = n - 1;
    while (start < end) {
        temp = stops[start];
        stops[start] = stops[end];
        stops[end] = temp;
        start++;
        end--;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", stops[i]);
    }
    return 0;
}
