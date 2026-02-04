#include <stdio.h>
int main() {
    int n, i;
    int roll, actualSum = 0;
    int expectedSum, missing;
    scanf("%d", &n);
    expectedSum = n * (n + 1) / 2;
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &roll);
        actualSum += roll;
    }
    missing = expectedSum - actualSum;
    printf("%d", missing);
    return 0;
}
