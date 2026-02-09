#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int minSum = -1;
    int rowIndex = -1;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < R; i++) {
        int sum = 0;
        for(int j = 0; j < C; j++) {
            sum += a[i][j];
        }
        if(sum != 0) {
            if(minSum == -1 || sum < minSum) {
                minSum = sum;
                rowIndex = i;
            }
        }
    }
    printf("%d", rowIndex);
    return 0;
}
