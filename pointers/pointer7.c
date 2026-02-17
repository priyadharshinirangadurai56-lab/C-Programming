#include <stdio.h>
int main() {
    char str[101];
    scanf("%s", str);    

    char *start = str;
    char *end = str;
    while (*end != '\0') {
        end++;
    }
    end--;   
    int flag = 1;

        while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}