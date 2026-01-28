#include <stdio.h>
int main() {
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N / 2; i++) {
        if (N % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == N)
        printf("Yes");
    else
        printf("No");
    return 0;
}
