#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int a[R][C];
    int count = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < R; i++) {
        int isUnique = 1;
        for(int j = 0; j < C; j++) {
            for(int k = j + 1; k < C; k++) {
                if(a[i][j] == a[i][k]) {
                    isUnique = 0;
                    break;
                }
            }
            if(!isUnique)
                break;
        }
        if(isUnique)
            count++;
    }
    printf("%d", count);
    return 0;
}
