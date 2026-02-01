#include <stdio.h>

int main() {
    int N, i;
    int fare;
    int totalCollection = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &fare);
        totalCollection += fare;
    }
    printf("Total Collection: ₹%d", totalCollection);

    return 0;
}
