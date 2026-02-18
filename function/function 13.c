#include <stdio.h>
int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result = result * base;
    }
    return result;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int ans = power(A, B);
    printf("%d", ans);
    return 0;
}
