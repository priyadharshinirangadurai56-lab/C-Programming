#include <stdio.h>
int main() {
    int capacity, N;
    int change;
    int occupied = 0;
    int criticalCount = 0;
    int i = 0;
    int limit;
    scanf("%d", &capacity);
    scanf("%d", &N);
    limit = (capacity * 90) / 100;   // 90% of capacity
    while (i < N) {
        scanf("%d", &change);
        occupied = occupied + change;
        if (occupied > limit) {
            criticalCount++;
        }
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", criticalCount);
    return 0;
}
