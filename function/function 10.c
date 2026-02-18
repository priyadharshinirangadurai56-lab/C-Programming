#include <stdio.h>
int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    int result = sumN(n);
    printf("%d\n", result);

    return 0;
}
