#include <stdio.h>
int main() {
    int role, time;
    scanf("%d", &role);
    scanf("%d", &time);
    switch (role) {
        case 1:   
            printf("Full Access");
            break;
        case 2:   
            if (time >= 9 && time <= 20)
                printf("Limited Access");
            else
                printf("Access Denied");
            break;
        default:
            printf("Access Denied");
    }
    return 0;
}
