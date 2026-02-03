#include <stdio.h>
int main() {
    int N, i = 0;
    int delay;
    int totalDelay = 0;
    int delayedDays = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &delay);
        totalDelay = totalDelay + delay;
        if (delay > 2) {
            delayedDays++;
        }
        i++;
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Days: %d\n", delayedDays);
    return 0;
}
