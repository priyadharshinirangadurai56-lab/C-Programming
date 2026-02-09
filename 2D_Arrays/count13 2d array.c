#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int palindromeCount = 0;
    for(int i = 0; i < R; i++) {
        int start = 0;
        int end = C - 1;
        int isPalindrome = 1;
        while(start < end) {
            if(arr[i][start] != arr[i][end]) {
                isPalindrome = 0;
                break;
            }
            start++;
            end--;
        }
        if(isPalindrome)
            palindromeCount++;
    }
    printf("%d", palindromeCount);
    return 0;
}
