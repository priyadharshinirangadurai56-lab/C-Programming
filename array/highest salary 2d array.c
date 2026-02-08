#include <stdio.h>
#include <limits.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int salary[R][C];
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &salary[i][j]);
            int val = salary[i][j];
            if(val > max1) {
                if(val != max1) {
                    max2 = max1;
                }
                max1 = val;
            }
            else if(val < max1 && val > max2) {
                max2 = val;
            }
        }
    }
    printf("%d", max2);
    return 0;
}
