#include <stdio.h>
int main() {
    int maxWeight, N;
    int weight;
    int currentWeight = 0;
    int i = 0, allowed = 0;
    int overload = 0;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &weight);
        if (currentWeight + weight <= maxWeight) {
            currentWeight = currentWeight + weight;
            allowed++;
        } else {
            overload = 1;
            break;
        }
        i++;
    }
    printf("Passengers Allowed: %d\n", allowed);
    if (overload == 1) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }
    return 0;
}
