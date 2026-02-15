#include <stdio.h>
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }
    return sum;
}
int main() {
    int N;
    scanf("%d", &N);
    int result = digitSum(N);
    printf("%d", result);
    return 0;
}
