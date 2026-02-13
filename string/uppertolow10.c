#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }
    printf("Lowercase string: %s", str);
    return 0;
}
