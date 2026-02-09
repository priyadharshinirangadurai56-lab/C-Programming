#include <stdio.h>
#include <stdlib.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int maxDiff = 0;
    for(int i = 0; i < R; i++) {
        for(int j = i + 1; j < R; j++) {
            for(int c1 = 0; c1 < C; c1++) {
                for(int c2 = 0; c2 < C; c2++) {
                    int diff = abs(a[i][c1] - a[j][c2]);
                    if(diff > maxDiff)
                        maxDiff = diff;
                }
            }
        }
    }
    printf("%d", maxDiff);
    return 0;
}
