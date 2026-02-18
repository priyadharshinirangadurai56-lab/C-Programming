#include <stdio.h>
int isPalindrome(int n) {
    int original = n;
    int reverse = 0;
    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    if (original == reverse)
        return 1;  
    else
        return 0;   
}
int main() {
    int num;
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
