#include <stdio.h>
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int N;
    scanf("%d", &N);
    long long result = factorial(N);
    printf("%lld", result);
    return 0;
}
