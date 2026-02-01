#include <stdio.h>
int main() {
    int N, i;
    int mark;
    int total = 0;
    int failedSubjects = 0;
    int average;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &mark);
        total += mark;

        if (mark < 40) {
            failedSubjects++;
        }
    }
    average = total / N;
    printf("Average Score: %d\n", average);
    printf("Failed Subjects: %d", failedSubjects);

    return 0;
}
