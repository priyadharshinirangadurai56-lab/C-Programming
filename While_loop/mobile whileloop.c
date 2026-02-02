#include <stdio.h>
int main() {
    int totalData, N;
    int usage;
    int i = 0, daysUsed = 0;
    scanf("%d", &totalData);
    scanf("%d", &N);
    while (i < N && totalData > 0) {
        scanf("%d", &usage);
        totalData = totalData - usage;
        daysUsed++;
        i++;
    }

    if (totalData < 0) {
        totalData = 0;
    }

    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}
