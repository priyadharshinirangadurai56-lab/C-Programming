#include <stdio.h>
int main() {
    int N;
    int errors;
    int totalErrors = 0;
    int criticalHours = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &errors);
        totalErrors += errors;

        if (errors > 50) {
            criticalHours++;
        }
    }
    printf("Total Errors: %d\n", totalErrors);
    printf("Critical Hours: %d", criticalHours);

    return 0;
}
