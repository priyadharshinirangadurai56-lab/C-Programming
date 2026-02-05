#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    if(min == INT_MAX) {
        printf("No positive");
    } else {
        printf("%d", min);
    }
    return 0;
}
