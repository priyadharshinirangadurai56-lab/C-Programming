#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = -1, second = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if(arr[i] < max && arr[i] > second) {
            second = arr[i];
        }
    }
    if(second == -1) {
        printf("Second highest salary not found");
    } else {
        printf("%d", second);
    }
    return 0;
}
