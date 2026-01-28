#include <stdio.h>
int main() {
    int flightClass, extraWeight;
    int charge = 0;
    scanf("%d", &flightClass);
    scanf("%d", &extraWeight);
    switch (flightClass) {
        case 1: 
            charge = extraWeight * 300;
            printf("Extra Baggage Charge ₹%d", charge);
            break;
        case 2: 
            if (extraWeight <= 3) {
                printf("Free");
            } else {
                charge = (extraWeight - 3) * 300;
                printf("Extra Baggage Charge ₹%d", charge);
            }
            break;
        default:
            printf("Invalid Flight Class");
    }
    return 0;
}
