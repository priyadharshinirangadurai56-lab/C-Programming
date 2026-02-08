#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxSum = INT_MIN;
    int minSum = INT_MAX;
    for(int i = 0; i < R; i++) {
        int sum = 0;
        for(int j = 0; j < C; j++) {
            sum += a[i][j];
        }
        if(sum > maxSum)
            maxSum = sum;
        if(sum < minSum)
            minSum = sum;
    }
    printf("%d", maxSum - minSum);
    return 0;
}
