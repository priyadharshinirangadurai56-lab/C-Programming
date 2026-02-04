#include <stdio.h>
int main() {
    int n, i = 0, x, count = 0;
    int marks[100];
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &marks[i]);
        i++;
    }
    scanf("%d", &x);
    i = 0;
    while (i < n) {
        if (marks[i] == x) {
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}
