#include <stdio.h>

int main() {
    int num1, num2, operation;
    float result;

    do {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("Choose an operation: ");
        scanf("%d", &operation);

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        if (operation == 1) {
            result = num1 + num2;
            printf("The result of addition is: %.2f\n", result);
        } else if (operation == 2) {
            result = num1 - num2;
            printf("The result of subtraction is: %.2f\n", result);
        } else if (operation == 3) {
            result = num1 * num2;
            printf("The result of multiplication is: %.2f\n", result);
        } else if (operation == 4) {
            if (num2 == 0) {
                printf("Error! Division by zero is not allowed.\n");
            } else {
                result = (float) num1 / num2;
                printf("The result of division is: %.2f\n", result);
            }
        } else {
            printf("Error! Invalid operation choice.\n");
        }

        printf("Do you want to perform another operation? (1-Yes, 0-No): ");
        scanf("%d", &operation);

    } while (operation == 1);

    return 0;
}
