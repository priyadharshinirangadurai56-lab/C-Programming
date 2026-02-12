#include <stdio.h>
#include <string.h>
int main() {
    char str[]=("priya");
    int i=0;
    while (str[i]!='\0'){
        printf("%c\n", str[i]);
        i++;
    }
    return 0;
}