#include <stdio.h>
int main() {
    int fuel, N;
    int consumption;
    int i = 0, completed = 0;
    scanf("%d", &fuel);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &consumption);
        if (fuel >= consumption) {
            fuel = fuel - consumption;
            completed++;
        } else {
            break;
        }

        i++;
    }
    printf("Completed Trips: %d\n", completed);
    printf("Remaining Fuel: %d\n", fuel);
    return 0;
}
