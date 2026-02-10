#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    for(int i = 0; i < R; i++) {
        int isIncreasing = 1;
        for(int j = 1; j < C; j++) {
            if (arr[i][j] <= arr[i][j - 1]) {
                isIncreasing = 0;
                break;
            }
        }
        if (isIncreasing) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
