#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter the number of units: ");
    scanf("%d", &units);
    if (units <= 50) {
        bill = units * 2;
    } else if (units <= 100) {
        bill = 50 * 2 + (units - 50) * 4;
    } else {
        bill = 50 * 2 + 50 * 4 + (units - 100) * 6;
    }
    printf("Bill amount = Rs. %.2f\n", bill);
    return 0;
}
