#include <stdio.h>
int main() {
    int N, status;
    int i = 0;
    int success = 0, cancel = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &status);
        if (status == 1) {
            success++;
        } else if (status == 0) {
            cancel++;
        }
        i++;
    }
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);
    if (cancel > success) {
        printf("Status: Risk\n");
    } else {
        printf("Status: Safe\n");
    }
    return 0;
}
