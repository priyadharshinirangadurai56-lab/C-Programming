#include <stdio.h>
int main() {
    char str[1000];
    int i = 0;
    int count=0;
    int word=0;
    scanf("%s", str);
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0') {
        if(str[i] ==' ') {
            count++;
            word=count+1;

        }
        i++;
    }