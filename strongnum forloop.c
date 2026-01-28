#include <stdio.h>
int main() {
    int N, temp, digit;
    int sum = 0;
    scanf("%d", &N);
    temp = N;
    for (; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }
        sum = sum + fact;
    }

    if (sum == N)
        printf("Yes");
    else
        printf("No");
    return 0;
}
