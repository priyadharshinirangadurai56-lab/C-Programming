#include <stdio.h>
int main() {
    int N;
    int delay;
    int totalDelay = 0;
    int delayedDeliveries = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &delay);
        totalDelay += delay;

        if (delay > 30) {
            delayedDeliveries++;
        }
    }
    printf("Total Delay: %d\n", totalDelay);
    printf("Delayed Deliveries: %d", delayedDeliveries);

    return 0;
}
