#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int closest = arr[0];

    for(int i = 1; i < N; i++) {
        if(abs(arr[i]) < abs(closest)) {
            closest = arr[i];
        }
        else if(abs(arr[i]) == abs(closest) && arr[i] > closest) {
            closest = arr[i];
        }
    }
    printf("%d", closest);
    return 0;
}
