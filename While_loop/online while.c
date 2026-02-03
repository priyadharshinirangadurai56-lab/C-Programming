#include <stdio.h>
int main() {
    int walletBalance, N;
    scanf("%d", &walletBalance);
    scanf("%d", &N);
    int i = 0;
    int purchase;
    int successCount = 0;
    while (i < N) {
        scanf("%d", &purchase);
        if (purchase <= walletBalance) {
            walletBalance = walletBalance - purchase;
            successCount++;
        } else {
            break;  
        }
        i++;
    }
    printf("Successful Purchases: %d\n", successCount);
    printf("Final Balance: %d\n", walletBalance);
    return 0;
}
