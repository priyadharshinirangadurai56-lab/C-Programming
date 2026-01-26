#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("Output: Digit\n");
    } else {
        printf("Output: Not a Digit\n");
    }
    return 0;
}
