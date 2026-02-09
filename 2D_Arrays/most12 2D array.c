#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int maxCount = 0;
    int result = arr[0][0];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int count = 0;
            for (int x = 0; x < R; x++) {
                for (int y = 0; y < C; y++) {
                    if (arr[i][j] == arr[x][y]) {
                        count++;
                    }
                }
            }
            if (count > maxCount) {
                maxCount = count;
                result = arr[i][j];
            }
        }
    }
    printf("%d", result);
    return 0;
}
