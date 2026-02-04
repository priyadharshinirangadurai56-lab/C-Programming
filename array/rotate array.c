#include <stdio.h>
int main() {
    int N, K;
    int arr[100];
    int i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    for (i = K; i < N; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < K; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
