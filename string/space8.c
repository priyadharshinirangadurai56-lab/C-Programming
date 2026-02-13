#include <stdio.h>
int main() {
    char str[1000];
    int i = 0, Count = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            Count++;    
        }
        i++;
    }
    printf("%d\n", Count);
    return 0;
}
