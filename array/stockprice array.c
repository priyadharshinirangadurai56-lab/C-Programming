#include <stdio.h>
int main() {
    int N;
    int arr[100];
    int i;
    int maxRight = -1;
    int temp;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = N - 1; i >= 0; i--) {
        temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight) {
            maxRight = temp;
        }
    }
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
