#include <stdio.h>
int main() {
    int n, i, j;
    int id[100];
    int isDuplicate;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &id[i]);
    }
    for (i = 0; i < n; i++) {
        isDuplicate = 0;
        for (j = 0; j < i; j++) {
            if (id[i] == id[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0) {
            printf("%d ", id[i]);
        }
    }
    return 0;
}
