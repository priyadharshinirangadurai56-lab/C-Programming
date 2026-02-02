#include <stdio.h>
int main() {
    int N, i = 0;
    int initialBalance, transaction;
    int lowCount = 0;
    scanf("%d", &N);
    scanf("%d", &initialBalance);
    while (i < N) {
        scanf("%d", &transaction);
        initialBalance = initialBalance + transaction;

        if (initialBalance < 2000) {
            lowCount++;
        }
        i++;
    }
    printf("Final Balance: %d\n", initialBalance);
    printf("Low Balance Days: %d\n", lowCount);
    return 0;
}
