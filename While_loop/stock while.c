#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int prev, curr;
    int i = 2;
    int dropCount = 0;
    int consecutiveDrops = 0;
    int crashDay = -1;
    scanf("%d", &prev);
    while (i <= N) {
        scanf("%d", &curr);
        if (curr < prev) {
            dropCount++;
            consecutiveDrops++;
            if (consecutiveDrops == 3 && crashDay == -1) {
                crashDay = i;   
            }
        } else {
            consecutiveDrops = 0; 
        }
        prev = curr;
        i++;
    }
    if (crashDay == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", crashDay);
    }
    printf("Total Drops: %d\n", dropCount);
    return 0;
}
