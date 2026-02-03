#include <stdio.h>
int main() {
    int maxWeight, N;
    scanf("%d", &maxWeight);
    scanf("%d", &N);
    int i = 0;
    int personWeight;
    int currentWeight = 0;
    int peopleCount = 0;
    int overload = 0;
    while (i < N) {
        scanf("%d", &personWeight);
        if (currentWeight + personWeight > maxWeight) {
            overload = 1;
            break;  
        }
        currentWeight = currentWeight + personWeight;
        peopleCount++;
        i++;
    }
    printf("People Entered: %d\n", peopleCount);
    if (overload == 1) {
        printf("Overload Status: Yes\n");
    } else {
        printf("Overload Status: No\n");
    }
    return 0;
}
