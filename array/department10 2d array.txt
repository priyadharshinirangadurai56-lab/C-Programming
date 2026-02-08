#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int data[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &data[i][j]);
        }
    }
    long long maxProduct = LLONG_MIN;
    int resultRow = 0;
    for(int i = 0; i < R; i++) {
        long long product = 1;
        for(int j = 0; j < C; j++) {
            product *= data[i][j];
        }
        if(product > maxProduct) {
            maxProduct = product;
            resultRow = i;
        }
    }
    printf("%d", resultRow);
    return 0;
}
