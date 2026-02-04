#include <stdio.h>
int main() {
    int N, num;
    int even = 0, odd = 0;
    int i = 0;
    scanf("%d", &N);
    while (i < N) {
        scanf("%d", &num);
        if (num % 2 == 0)
            even++;
        else
            odd++;

        i++;
    }
    printf("Even:%d Odd:%d", even, odd);
    return 0;
}
