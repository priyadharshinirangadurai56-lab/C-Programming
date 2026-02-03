#include <stdio.h>
int main() {
    int maxCapacity, N;
    scanf("%d", &maxCapacity);
    scanf("%d", &N);
    int i = 0;
    int arriving;
    int treated = 0;
    int rejected = 0;
    while (i < N) {
        scanf("%d", &arriving);
        if (treated < maxCapacity) {
            if (treated + arriving <= maxCapacity) {
                treated = treated + arriving;
            } else {
                rejected = rejected + (treated + arriving - maxCapacity);
                treated = maxCapacity;
            }
        } else {
            rejected = rejected + arriving;
        }
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);
    return 0;
}
