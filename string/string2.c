#include <stdio.h>
int main() {
    char str[100];
    int hasUpper = 0;
    scanf("%s", str);   
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            hasUpper = 1;
            break;
        }
    }
    if (hasUpper)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
