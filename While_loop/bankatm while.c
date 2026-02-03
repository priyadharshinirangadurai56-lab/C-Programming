#include <stdio.h>
int main() {
    int atmCash, N;
    scanf("%d", &atmCash);
    scanf("%d", &N);
    int withdraw;
    int i = 0;
    int successCount = 0;
    while (i < N) {
        scanf("%d", &withdraw);
        if (withdraw <= atmCash) {
            atmCash = atmCash - withdraw;
            successCount++;
        } else {
            break;  
        }
        i++;
    }
    printf("Successful Withdrawals: %d\n", successCount);
    printf("Remaining Cash: %d\n", atmCash);
    return 0;
}
