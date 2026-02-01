#include <stdio.h>
int main() {
    int N, i;
    int units;
    int totalUnits = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &units);
        totalUnits += units;
    }
    printf("Total Units: %d", totalUnits);

    return 0;
}
