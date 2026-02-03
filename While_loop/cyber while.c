#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int i = 1, value;
    int totalFail = 0;
    int consecutiveFail = 0;
    int lockAttempt = -1;
    while (i <= N) {
        scanf("%d", &value);
        if (value == 0) {
            totalFail++;
            consecutiveFail++;
            if (consecutiveFail == 3 && lockAttempt == -1) {
                lockAttempt = i;
            }
        } else {
            consecutiveFail = 0; 
        }
        i++;
    }
    if (lockAttempt == -1)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n", lockAttempt);

    printf("Total Failed Attempts: %d\n", totalFail);

    return 0;
}
