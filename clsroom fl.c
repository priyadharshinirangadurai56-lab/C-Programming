#include <stdio.h>
int main() {
    int N;
    int noise;
    int maxNoise = 0;
    int noisyPeriods = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &noise);
        if (noise > maxNoise) {
            maxNoise = noise;
        }
        if (noise > 70) {
            noisyPeriods++;
        }
    }

    printf("Maximum Noise: %d\n", maxNoise);
    printf("Noisy Periods: %d", noisyPeriods);

    return 0;
}
