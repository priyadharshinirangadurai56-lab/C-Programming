#include <stdio.h>
int main() {
    int N, hours;
    int i = 0;
    int inactive = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &hours);
        if (hours == 0) {
            inactive++;
        }
        i++;
    }
    printf("Inactive Weeks: %d\n", inactive);
    if (inactive >= 3) {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low\n");
    }
    return 0;
}
