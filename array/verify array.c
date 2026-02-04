#include <stdio.h>
int main() {
    int n, i = 0;
    int sales[100];
    int sorted = 1;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &sales[i]);
        i++;
    }
    i = 0;
    while (i < n - 1) {
        if (sales[i] > sales[i + 1]) {
            sorted = 0;
            break;
        }
        i++;
    }
    if (sorted == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
