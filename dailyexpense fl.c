#include <stdio.h>
int main() {
    int N, i;
    int expense;
    int totalExpense = 0;
    int overspendDays = 0;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &expense);
        totalExpense += expense;

        if (expense > 1000) {
            overspendDays++;
        }
    }
    printf("Total Expense: %d\n", totalExpense);
    printf("Overspend Days: %d\n", overspendDays);

    return 0;
}
