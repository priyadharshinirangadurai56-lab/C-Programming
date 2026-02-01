#include <stdio.h>
int main() {
    int N;
    int voltage;
    int minVoltage;
    int lowVoltageEvents = 0;
    scanf("%d", &N);
    scanf("%d", &voltage);
    minVoltage = voltage;
    if (voltage < 210) {
        lowVoltageEvents++;
    }
    for (int i = 1; i < N; i++) {
        scanf("%d", &voltage);
        if (voltage < minVoltage) {
            minVoltage = voltage;
        }
        if (voltage < 210) {
            lowVoltageEvents++;
        }
    }
    printf("Minimum Voltage: %d\n", minVoltage);
    printf("Low Voltage Events: %d", lowVoltageEvents);

    return 0;
}
