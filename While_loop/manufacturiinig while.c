#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 1, value;
    int unsafeCount = 0;
    int consecutiveUnsafe = 0;
    int breakdownAt = -1;
    while (i <= N) {
        scanf("%d", &value);
        if (value > 70) {
            unsafeCount++;
            consecutiveUnsafe++;
            if (consecutiveUnsafe == 3 && breakdownAt == -1) {
                breakdownAt = i;
            }
        } else {
            consecutiveUnsafe = 0;  
        }
        i++;
    }
    if (breakdownAt == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdownAt);

    printf("Unsafe Readings: %d\n", unsafeCount);
    return 0;
}
