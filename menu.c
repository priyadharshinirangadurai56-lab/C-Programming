#include <stdio.h>
int main() {
    int choice;
    float num1, num2, result;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch(choice) {
        case 1: 
            result = num1 + num2;
            printf("Sum = %.2f\n", result);
            break;
        case 2: 
            result = num1 - num2;
            printf("Difference = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Product = %.2f\n", result);
            break;
        case 4: 
            if(num2 != 0) {
                result = num1 / num2;
                printf("Quotient = %.2f\n", result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid choice! Enter 1-4.\n");
    }
    return 0;
}
