#include <stdio.h>

int main() {
    int N, i;
    int amount;
    int total = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &amount);
        total += amount;
    }
    if (total <= 10000) {
        printf("Approved");
    } else {
        printf("Limit Exceeded");
    }
    return 0;
}
