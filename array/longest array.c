#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int currentCount = 1;
    int maxCount = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }
        if(currentCount > maxCount) {
            maxCount = currentCount;
        }
    }
    printf("%d", maxCount);
    return 0;
}
