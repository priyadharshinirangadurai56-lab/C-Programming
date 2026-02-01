#include <stdio.h>
int main() {
    int N;
    int usage;
    int totalData = 0;
    int highUsageDays = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &usage);
        totalData += usage;

        if (usage > 2) {
            highUsageDays++;
        }
    }
    printf("Total Data: %d\n", totalData);
    printf("High Usage Days: %d", highUsageDays);
    return 0;
}
