#include <stdio.h>
int main() {
    int N;
    int arr[100];
    int i;
    int max;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[N - 1];
    printf("%d ", max);   
    for (i = N - 2; i >= 0; i--) {
        if (arr[i] > max) {
            printf("%d ", arr[i]);
            max = arr[i];
        }
    }
    return 0;
}
