#include <stdio.h>
int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;   
            break;
        }
    }
    if (isPrime == 1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
