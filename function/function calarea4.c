#include <stdio.h>
float circleArea(int r) {
    return 3.14 * r * r;
}
int main() {
    int R;
    scanf("%d", &R);
    float area = circleArea(R);
    printf("%.2f", area);
    return 0;
}
