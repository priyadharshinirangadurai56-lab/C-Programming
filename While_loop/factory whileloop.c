#include <stdio.h>
int main() {
    int N, status;
    int i = 0;
    int currentStreak = 0, maxStreak = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &status);

        if (status == 0) {
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }
    printf("Longest Failure Streak: %d\n", maxStreak);

    return 0;
}
