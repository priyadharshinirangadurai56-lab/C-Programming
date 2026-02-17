#include <stdio.h>
int main() {
    char str[201];
        fgets(str, 201, stdin);
    char *p = str;
    int count = 1;   
        while (*p != '\0') {
        if (*p == ' ')
            count++;
        p++;
    }
    printf("%d", count);
    return 0;
}