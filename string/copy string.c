#include <stdio.h>
#include <string.h>
int main() {
    char str1[50];
    char str2[]=("i am programmer");
    strcpy(str1,str2);
    printf("%s\n", str1);
    printf("%s", str2);
    return 0;
}