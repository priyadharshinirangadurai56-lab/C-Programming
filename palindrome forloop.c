#include <stdio.h>
int main() {
    int n, temp, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    for (; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        rev = rev * 10 + digit;
    }
    if (rev == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
