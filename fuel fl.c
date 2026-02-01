#include <stdio.h>
int main() {
    int N;
    int price;
    int highestPrice = 0;
    int highPriceDays = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &price);
        if (price > highestPrice) {
            highestPrice = price;
        }
        if (price > 100) {
            highPriceDays++;
        }
    }
    printf("Highest Price: %d\n", highestPrice);
    printf("High Price Days: %d", highPriceDays);

    return 0;
}
