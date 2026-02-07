#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int peakCount = 0;

    for(int i = 1; i < N - 1; i++) {
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            peakCount++;
        }
    }
    printf("%d", peakCount);
    return 0;
}
